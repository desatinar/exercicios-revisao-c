#include <stdio.h>
#include <stdlib.h>


void linha(){
	int i;
	for(i=0;i<=60;i++){
		printf("_");
	}
}

main(){
	int vetor[6], i;
	
	
	for(i=1;i<=6;i++){
	printf("(%d) Infrome o numero:\n", i);
	scanf("%d",&vetor[i]);
	
}

linha();

	for(i=1;i<=6;i++){
		printf("\nEXEBIR: A[%d]\n", vetor[i]);
	}


}
