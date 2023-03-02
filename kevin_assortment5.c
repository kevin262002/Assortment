#include<stdio.h>

main(){
	
	int a,b;
	
	printf("Enter Size : ");
	scanf("%d",&a);
	
	printf("Enter Size : ");
	scanf("%d",&b);
	
	int i,j;
	int x[a][b];
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			
			printf("Value of[%d][%d] : ",i,j);
			scanf("%d",&x[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			
			printf(" %d",x[i][j]);
		}
		printf("\n");
	}
		printf("\n");
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			
			if(x[i][j]%2==0){
				printf("The Even Elements : %d\n",x[i][j]);
			}
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
