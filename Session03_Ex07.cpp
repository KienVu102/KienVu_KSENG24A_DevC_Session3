#include <stdio.h>

int main(){
	int number;
	printf("Ban hay nhap so co 4 chu so: ");
	scanf("%d", &number);
	int tong = (number / 1000) + (number / 100 % 10) + (number / 10 % 10) + (number % 10);
    printf("Tong 4 so cua %d la: %d", number, tong);
    
    return 0;
}
