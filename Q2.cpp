#include<stdio.h>

int main(){
	

		int matriz[6][3], produto;
		
		
		for(int i=0; i<6; i++){
			for(int j=0; j<3; j++){
				scanf("%d", &matriz[i][j]);
			}
		}
		
		for(int i=0; i<6; i++){
		
			for(int j=0; j<3; j++){
				printf("%d\n", matriz[i][j]);
			}
			
			printf("\n");
			
		}
		
		produto = matriz[0][2]*matriz[1][2]*matriz[2][2]*matriz[3][2]*matriz[4][2]*matriz[5][2];
		
		printf("%d", produto);
				
}
