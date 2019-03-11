#include <stdio.h>
#include <stdlib.h>

int main(){
	float vmm, pa, porcAum;
	printf("Digite a media de vendas mensais: \n");
	scanf("%f", &vmm);
	printf("Digite o preco atual: \n");
	scanf("%f", &pa);
	
	if(vmm < 500){
		if(pa < 30){
			porcAum = 0.1;
			pa = pa * (1 + porcAum);
			printf("O Volume de vendas e %.0f e seu preco atual com o aumento de %.2f\nficara com preco %.2f\n", vmm, porcAum, pa);
		}
		else{
			printf("O Volume de vendas e %.0f e seu preco atual ficara com preco %.2f\n", vmm, pa);
		}
	}
	else if(vmm >= 500 && vmm < 1200){
		if(pa >= 30 && pa < 80){
			porcAum = 0.15;
			pa = pa * (1 + porcAum);
			printf("O Volume de vendas e %.0f e seu preco atual com o aumento de %.2f\nficara com preco %.2f\n", vmm, porcAum, pa);
		}
		else{
			printf("O Volume de vendas e %.0f e seu preco atual ficara com preco %.2f\n", vmm, pa);
		
	}
}
	else{
		if(pa >= 80){
			porcAum = 0.2;
			pa = pa * (1 - porcAum);
			printf("O Volume de vendas e %.0f e seu preco atual com o desconto de %.2f\nficara com preco %.2f\n", vmm, porcAum, pa);
		}
		else{
			printf("O Volume de vendas e %.0f e seu preco atual ficara com preco %.2f\n", vmm, pa);
		
	}
}
	system("pause");
    return 0;
}
