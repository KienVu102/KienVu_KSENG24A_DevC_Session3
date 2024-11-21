#include <stdio.h>

int main(){
	const float pi = 3.14;
	float bankinh;
	printf("Nhap ban kinh hinh tron: ");
	scanf("%f", &bankinh);
	float chuvi = 2 * pi * bankinh;
	float dientich = bankinh * pi * bankinh;
	printf("Chu vi hinh tron la: %.2f \n", chuvi);
	printf("Dien tich hinh tron la: %.2f ", dientich);

	
	return 0;
}
