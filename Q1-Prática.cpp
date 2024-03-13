#include<stdio.h>


int main(){
	int vet[8], vetpositivos[8], vetnegativos[8];
	int positivos;
	int negativos;
	
	
	for(int i=0; i<8; i++){
		scanf("%d", &vet[i]);
	}
	
	for(int i=0; i<8; i++){
		if(vet[i]>0){
			vetpositivos[positivos]=vet[i];
			positivos++;
		}
		
		
	}
	
	for(int i=0; i<8; i++){
		if(vet[i]<0){
			vetnegativos[negativos]=vet[i];
			negativos++;
		}
		
}
	
	printf("Numeros positivos: \n");
	for(int i=0; i<positivos; i++){
		printf("%d ", vetpositivos[i]);
	}
	
	printf("\nNumeros negativos: \n");
	for(int i=0; i<negativos; i++){
		printf("%d", vetnegativos[i]);
	}
	
	
	
	

	
}
