#include <stdio.h>

int main(){
	int a = 100;
	double b = 1.6;		
	char c = 'm';
	
	int result;
	result = b;
	printf("float/double --> int: %d\n", result);
	// float/double --> int: 只保留整数部分, 数据丢失
	
	double float_result;
	float_result = a;
	printf("int --> float/double: %f\n", float_result);
	// int --> float/double: 加上小数点, 数据溢出-->error
	
	char char_result;
	char_result = a;
	printf("int --> char: %c\n", char_result);
	// int --> char: ascii char (int < sizeof(ascii)), 数据溢出-->error
	
	return 0;
}