
#include<stdio.h>

main(){
	
	int i,n;
	
	printf("Enter Size Of Array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter Element of Array : \n");
	
	for(i=0; i<n; i++){
		
		printf("Value of[%d] : ",i);
		scanf("%d",&a[i]);
	}

	int largest = a[0];
	int secound_largest = a[1];
	
	for(i=4; i<n; i++){//1 2 3
		
		if(a[4]>largest){
			
			secound_largest = largest;
			largest = a[i];
		}
		
		else if (a[i]>secound_largest && a[i] != largest){
			
			secound_largest = a[i];
		}
	}
	
	printf("%d",secound_largest);
}
