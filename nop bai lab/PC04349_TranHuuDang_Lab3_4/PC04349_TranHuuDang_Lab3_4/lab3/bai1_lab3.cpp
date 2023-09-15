#include <stdio.h> //DangthPC04349
int main () {
	float diem;
	printf("Bai1: Xay dung chuong trinh tinh toan hoc luc \n");
	printf("Nhap vao diem cua sinh vien: ");
	scanf("%f",&diem);
	do {
		if (diem>10) {
			printf("Khong co diem vuot qua 10, moi ban nhap lai: ");
			scanf("%f",&diem);
		}
		else if (diem>=9) {
			printf("Ban co hoc luc xuat sac!");
			break;
		}
		else if (diem>=8) {
			printf("Ban co hoc luc gioi!");
			break;
		}
		else if (diem>=6.5) {
			printf("Ban co hoc luc kha!");
			break; 
		}
		else if (diem>=5) {
			printf("Ban co hoc luc trung binh!");
			break;
		}
		else if (diem>=3.5) {
			printf("Ban co hoc luc yeu!");
			break;
		}
		else if (diem>=0) {
			printf("Ban co hoc luc kem!");
			break;
		}
		else {
			printf("Khong co diem nao nho hon 0, moi ban nhap lai: ");
			scanf("%f",&diem);
		}
	}while (diem>0|| diem<10);
	getchar();
	return 0;
}
