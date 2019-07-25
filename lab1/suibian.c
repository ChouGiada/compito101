#include <stdio.h>
int main ( ) {
	int a;
	int b;
	int c;
	int delta;
	a = 3;
	b = 8;
	c = 0;
	printf ("%d,%d,%d\n",a,b,c);
	delta=b*b-4*a*c;
	if(delta > 0) {
		printf ("ci sono due tipi\n");
	}
	else if (delta == 0){
		printf ("l'unica soluzione");
	}
	
	else{
		printf ("zero");
	}
	
	return 0;
}