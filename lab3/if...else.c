#include <stdio.h>
// > >= < <= == !=
// ! && || 
// 正确是1, 不正确是0

/* &&:
0 && 0: 0
0 && 1: 0
1 && 0: 0
1 && 1: 1
*/
/* ||:
0 || 0: 0
0 || 1: 1
1 || 0: 1
1 || 1: 1
*/

//true: 非0
//false: 0
int main (){
	int a = 2;
	//if ((1>2)&&(a=10)){
	if ((2>1)||(a=0)){
		printf("yes\n");
		printf("2nd line\n");
	}
	printf("a: %d\n",a);
	
	
	return 0;
	
}