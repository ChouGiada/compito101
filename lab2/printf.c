#include <stdio.h>

int main(){
	
	
	int a = 2, b=-19; // a: 内存上的一个变量叫做a
	//printf("input the values of a and b, split by comma\n");
	//scanf("%d %d",&a,&b);
	printf("a = |%d|, b = |%d|\n", a, b);
	printf("a = |%4d|, b = |%4d|\n", a, b);
	printf("a = |%+4d|, b = |%+4d|\n", a, b);
	printf("a = |%-+4d|, b = |%-+4d|\n", a, b);
	printf("a = |%04d|, b = |%04d|\n", a, b);
	
	printf("====================================\n");
	
	float c = 3.1475;
	printf("|%f|\n",c);
	printf("|%06.2f|\n",c);
	printf("====================================\n");
	
	

	
	return 0;
	
}