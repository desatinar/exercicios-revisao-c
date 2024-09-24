Aqui está o código totalmente alinhado e sem espaços adicionais:

```c
#include <stdio.h>
int main() {
int idadeA,idadeB;
for(idadeA=1;idadeA<100;idadeA++) {
for(idadeB=1;idadeB<100;idadeB++) {
if(idadeA==2*(idadeB-(idadeA-idadeB))) {
if((idadeA+(idadeB+(idadeA-idadeB)))==81) {
printf("Idade de A: %d, Idade de B: %d\n",idadeA,idadeB);
return 0;
}
}
}
}
printf("Não foram encontradas idades válidas.\n");
return 0;
}
```

O código agora está completamente compacto, sem espaços desnecessários. Você pode compilar e executar normalmente!
