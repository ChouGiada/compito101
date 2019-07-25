#include <stdio.h>
int main () {
	int somma = 99,un_euro = 1, cinque_euro = 5,dieci_euro = 10;
	//int un_euro = 1;
	//int cinque_euro = 5;
	//int dieci_euro = 10;
	int numero_di_un_euro,numero_di_cinque_euro,numero_di_dieci_euro;
	//int numero_di_cinque_euro;
	//int numero_di_dieci_euro;
	
	//printf("%d,%d,%d,%d\n", sommma,un_euro,cinque_euro,dieci_euro);
	int remain=somma;
	
	numero_di_dieci_euro = somma/dieci_euro;
	
	remain = somma%dieci_euro;
	
	numero_di_cinque_euro = remain/cinque_euro;
	remain = remain%dieci_euro;
	
	numero_di_un_euro = remain/un_euro;
	
	//numero_di_cinque_euro=(((somma-numero_di_dieci_euro*dieci_euro)-(somma-numero_di_dieci_euro*dieci_euro)%cinque_euro)/cinque_euro);
	//numero_di_un_euro=((somma-numero_di_dieci_euro*dieci_euro-numero_di_cinque_euro*cinque_euro)/un_euro);
	
	printf("quindi nel %d euro, ci sono %d dieci euro , %d cinque euro , %d\n un euro\n",somma,numero_di_dieci_euro,numero_di_cinque_euro,numero_di_un_euro);
	
	return 0;
}