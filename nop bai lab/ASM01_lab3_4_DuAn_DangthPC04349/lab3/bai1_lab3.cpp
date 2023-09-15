#include <stdio.h> //DangthPC04349
int main () {
	float diem;
	printf("Bai1: Xay dung chuong trinh tinh toan hoc luc \n");
	printf("Nhap vao diem cua sinh vien: ");
	scanf("%f",&diem);
	if (diem>10) printf("Khong co diem vuot qua 10, vui long nhap lai!");
	else if (diem>=9) printf("Ban co hoc luc xuat sac!");
	else if (diem>=8) printf("Ban co hoc luc gioi!");
	else if (diem>=6.5) printf("Ban co hoc luc kha!");
	else if (diem>=5) printf("Ban co hoc luc trung binh!");
	else if (diem>=3.5) printf("Ban co hoc luc yeu!");
	else if (diem>=0) printf("Ban co hoc luc kem!");
	else printf("Khong co diem nao nho hon 0, vui long nhap lai!");
	getchar();
	return 0;
}
