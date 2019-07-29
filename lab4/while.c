#include <stdio.h>

int main (){
	
	int val1,val2, res=0;
	scanf("%d %d",&val1,&val2);
	
	while (val1<val2){
		if (val1%2==0){
			sum+=val1;
		}
		val1++;
		
	}
	printf("*");
	printf("\n");
	
	/*
	do{
		res++;
		val/=10;
	}while(val);
	
	
	while (val){
		res++;
		val/=10;
	}*/

	printf("%d\n",sum);
	
	return 0;
	
}