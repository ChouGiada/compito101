#include <stdio.h>

int main (){
	int i, input = 17 , isPrime = 1;
	
	for (i = 2; i<input-1 ; i++){
		if (input%i==0){
			isPrime = 0;
			//printf("%d ", i);
		}
	}

	//printf("\n");
	if (isPrime){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	
	
	
	return 0;
	
}