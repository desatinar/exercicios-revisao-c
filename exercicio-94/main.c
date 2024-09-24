#include <stdio.h>
#include <stdlib.h>

void linha(){
	int i;
	for(i=1;i<=70;i++){
		printf("_");
	}
}


main(){
	int i, A[2], B[2], C[2], calcular=0;
	
	for(i=1;i<=10;i++){
		printf("\n(A) informe o numero:\n");
		scanf("%d", &A[i]);
}
linha();
		for(i=1;i<=10;i++){
		printf("\n(B) informe o numero:\n");
		scanf("%d", &B[i]);
}
linha();

	for(i=1;i<=10;i++){
	C[i] = A[i] - B[i];
}
	
	
	for(i=1;i<=10;i++){
		printf("\nResultados de A[%d] - B[%d] = C[%d]\n", A[i], B[i], C[i]);
	}
}
