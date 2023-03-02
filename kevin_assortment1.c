#include<stdio.h>

main(){
	
	int a;
	
	printf("Enter Size :");
	scanf("%d",&a);
	
	int n[a];	
	int i;
	
	for(i=0; i<a; i++){
		
		printf("Value of[%d] : ",i);
		scanf("%d",&n[i]);
	}
	printf("\n");
	
	for(i=0; i<a; i++){
		
		if(n[i]<0){
			printf("Negative Elements : %d\n",n[i]);
		}
	}
	printf("\n");
}
