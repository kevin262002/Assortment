#include<stdio.h>

main(){
	
	int i,j;
	int a,b,c,d;
	
	printf("Enter size : ");
	scanf("%d",&a);
	
	printf("Enter size : ");
	scanf("%d",&b);
	
	int x[a][b];
	int y[a][b];
	int sum[a][b];
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			
			printf("Value of [%d][%d] :",i,j);
			scanf("%d",&x[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			
			printf("Value of [%d][%d] :",i,j);
			scanf("%d",&y[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			
			printf("%d",x[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			
			printf("%d",y[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			
			sum[a][b]=x[i][j]+y[i][j];
			
			printf("%d",sum[i][j]);
		}
		printf("\n");
	}	
}
