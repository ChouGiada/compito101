#include <stdio.h>

int main(){
	int a = 15;
	
	if (a==15){
		printf("a=15\n");
	}
	else if (a==10){
		printf("a=10\n");
		printf("a=0\n");
		printf("a=0\n");
	}
	else if (a==0){
		printf("a=0\n");
	}
	else {
		printf("a goes default\n");
	}
	
	printf("===========in switch==============\n");
	
	switch (a){
		case 13:
		case 14:
		case 15:
		printf("a = 15\n");
		break;
		case 9:
		case 10:
		printf("a = 10\n");
		break;
		case 0:
		printf("a = 0\n");
		break;
		default:
		printf("a goes default\n");
		
	}
	
	
	return 0;
}

