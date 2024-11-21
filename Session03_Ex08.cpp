#include <stdio.h>

int main(){
	int number;
	printf("Ban hay nhap so co 4 chu so: ");
	scanf("%d", &number);
	int nghin = number / 1000 ;
	int tram  = number % 1000 / 100 ;
	int chuc  = number % 100  / 10 ;
	int donvi = number % 10 ;
    printf("So dao nguoc cua %d la: %d%d%d%d", number, donvi, chuc, tram, nghin);
    
    return 0;
}
