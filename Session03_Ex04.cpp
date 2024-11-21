#include <stdio.h>

int main(){
	float diemToan, diemVan, diemAnh, tong, trungbinh;
	printf("Hay nhap diem toan: ");
	scanf("%f", &diemToan);
	printf("Hay nhap diem van: ");
	scanf("%f", &diemVan);
	printf("Hay nhap diem anh: ");
	scanf("%f", &diemAnh);
	tong = diemToan + diemVan + diemAnh;
	printf("Tong diem 3 mon la: %.2f \n", tong);
	trungbinh = (diemToan + diemVan + diemAnh) / 3;
	printf("Tong diem trung binh 3 mon la: %.2f", trungbinh);
	
	return 0;
}
