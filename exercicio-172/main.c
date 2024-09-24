int negativos(float *vet, int N) {
    int count = 0; 
    int i;
    for (i = 0; i < N; i++) {
        if (vet[i] < 0) { 
            count++; 
        }
    }
    
    return count; 
}

int main() {
    float arr[] = {1.2, -3.4, 5.6, -7.8, 0.0};
    int N = sizeof(arr) / sizeof(arr[0]); 
    int resultado = negativos(arr, N);
    
    printf("Quantidade de numeros negativos: %d\n", resultado);
    
    return 0;
}
