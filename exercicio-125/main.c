/*Em programas de transmissão de voz sobre IP (VoIP), como o Skype, o áudio é enviado em “pacotes”. Os dados em um pacote sem compressão são representados como sinais de áudio: uma série de valores, com cada valor correspondendo a uma amostra do sinal em um instante do tempo
Em conversas entre duas pessoas – incluindo conversas por telefone ou VoIP – é normal que um dos lados permaneça em silêncio enquanto o outro fala. Com base nisso, é possível aplicar uma ideia radical: para minimizar o uso da rede, pacotes contendo apenas silêncio (ou quase) simplesmente não são enviados!
Crie uma função que recebe os seguintes parâmetros:

short* in: buffer de entrada. Cada amostra é representada como um inteiro de 16 bits com sinal.

unsigned long length: número de amostras no buffer de entrada.

unsigned short min_level: amostras no intervalo [-min_level, +min_level] são consideradas como sendo silêncio. Esta tolerância é necessária porque o silêncio raramente é absoluto, devido a sons do ambiente ou mesmo ruído na captação.

double min_proportion: valor entre 0 e 1, indica a proporção de amostras para que um sinal seja considerado como contendo silêncio. Normalmente, é um valor alto, acima de
0.90. Se a proporção de amostras indicar um número de amostras não-inteiro, o número de amostras deve ser arredondado para baixo. Por exemplo, se min_proportion é 0.98 e o buffer tem 240 amostras, um sinal com 235 ou mais amostras de silêncio será considerado como silêncio.

A função deve retornar 1 se a proporção de amostras no intervalo [-min_level,
+min_level] for maior ou igual a min_proportion, ou 0 do contrário. O protótipo da função é o seguinte:

int ehSilencio (short* in, unsigned long length, unsigned short min_level,double min_proportion);
*/
#include <stdio.h>

int ehSilencio(short* in, unsigned long length, unsigned short min_level, double min_proportion) {
    unsigned long silencio_count = 0;
    unsigned long min_silencio_count = (unsigned long)(length * min_proportion);

    for (unsigned long i = 0; i < length; i++) {
        if (in[i] >= -min_level && in[i] <= min_level) {
            silencio_count++;
        }
    }
    return (silencio_count >= min_silencio_count) ? 1 : 0;
}
/*int main() {
    short audio_samples[] = {0, 0, 0, 1, -1, 0, 0};
    unsigned long length = sizeof(audio_samples) / sizeof(audio_samples[0]);
    unsigned short min_level = 1;
    double min_proportion = 0.75;

    int resultado = ehSilencio(audio_samples, length, min_level, min_proportion);
    printf("Eh silencio? %d\n", resultado);

    return 0;
}*/
