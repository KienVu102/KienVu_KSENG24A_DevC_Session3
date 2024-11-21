#include <stdio.h>

int main(){
	float canhday, chieucao, dientich;
	printf("Ban hay nhap canh day cua tam giac: ");
	scanf("%f", &canhday);
	printf("Ban hay nhap chieu cao cua tam giac: ");
	scanf("%f", &chieucao);
	dientich = chieucao * canhday * 0.5;
	printf("Dien tich cua tam giac la: %.2f", dientich);
	
	return 0;
}
