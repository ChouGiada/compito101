#include <stdio.h>
/*

+ - (正负号) 
* / 
%
+ -
=

*/

// += -= /= *= %=
int main(){
	
	int a = 10, b = 13;
	a+=1;
	a++;
	++a;
	printf("%d, %d\n", ++a, a);
	
	double result;
	
	result = (10+13)/2.00;
	// 除号的两边都是int的话, 结果就是int
	// 如果一边是float, 结果就是float
	
	//printf("result is %f\n",result);
	
	int c = 6;

	
	
	//printf("result is %d, a = %d, b = %d, c = %d\n",(c*=2)*6*(c+=3), a, b,c);
	
	
/*
	//a = 10
	//a = a + 5;
	a +=5;
	// a = 15
	//a = a * 2;
	a *= 2;
	// a = 30
	//a = a / 3;
	a /=3;
	// a = 10;
	//a = a - 4;
	a -= 4;
	// a = 6;
	*/
	
	return 0;
}