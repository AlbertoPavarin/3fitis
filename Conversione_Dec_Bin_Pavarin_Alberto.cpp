#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

main() {
	int n;//numero da convertire
	
	string b;//stringa che contiene il numero convertito in base binaria
	b="";
	
	printf("Inserisci un numero decimale: ");
	scanf("%d", & n);
	
	while (n>0) {	
		if (n%2==0)//se il numero diviso per 2 dà come resto 0
			b='0'+b;//si aggiunge 0 alla striga b
		else
			b='1'+b;//altrimenti si aggiunge 1 alla stringa b
		n=n/2;//calcolo del numero diviso 2
	}
	
	cout<<b;
	
	system("PAUSE");
	return 0;
}

