#include <stdlib.h>
#include <stdio.h>

#define num_esp 20



main(){
	int idade, op, i, cont_oti=0, cont_bom=0, cont_reg=0, cont_ruim=0, cont_pessimo=0, somaru=0, maiorpe=0, maiorot=0, maiorru=0; 
	float perce_oti, perce_bom, perce_ruim, perce_pes, perce_reg, perce_di, mediaru=0;
	
	for(i=1;i<=num_esp; i++){
		
		printf("\nidade do espectador %d:\n", i);
		scanf("%d", &idade);
		printf("opniao 0-otimo, 1-bom, 2-regular, 3-ruim, 4-pessimo:\n");
		scanf("%d", &op);
		}

	if(op == 0){
		cont_oti++;
		if(idade > maiorot){
			maiorot = idade;
		perce_oti = (cont_oti*100)/20;
	}
	}
	if( op == 1){
		cont_bom++;
		perce_bom = (cont_bom*100)/20;
	}
	if(op == 2){
		cont_reg++;
		perce_reg = (cont_reg*100)/20;
	}
	if(op == 3){
		if(idade > maiorru){
			maiorru = idade;
		cont_ruim++;
		somaru += idade;
		mediaru = (somaru/cont_ruim);
	}
	}
	if(op == 4){
		if(idade > maiorpe){
			maiorpe = idade;
		cont_pessimo++;
		perce_pes = (cont_pessimo*100)/20;
	}
	}
	
	perce_di = (perce_bom/perce_reg)*100;
	
printf("quantidade de respostas otimo: %d\n\n",cont_oti);
//B
printf("a diferencia percentual entre respostas bom e regular: %.2f\n\n", perce_di);
//C
printf("a media de idade das pessoas que responderam ruim: %.2f\n\n", mediaru);
//D
printf("a porcentagem de respostas pessima e a maior idade %d que utilizou esta opcao: %.2f\n\n", maiorpe, perce_pes);
//E
printf("a diferencia da maior idade que respondeu otimo e da maior idade que respondeu ruim: %d", maiorot-maiorru);

}
