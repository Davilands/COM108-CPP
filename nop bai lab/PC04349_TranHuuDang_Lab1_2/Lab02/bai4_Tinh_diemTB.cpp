#include <stdio.h> //DangthPC04349
int main () {
	//khai bao cac bien Toan Li Hoa
	float toan,li,hoa,diemtrungbinh;
	printf("Bai 4: Xay dung chuong trinh tinh diem trung binh \n");
	
	//Nhap vao diem ba mon
	printf("Nhap diem mon Toan: ");
	scanf ("%f", &toan);
	printf("Nhap diem mon Vat Li: ");
	scanf ("%f", &li);
	printf("Nhap diem mon Hoa hoc: ");
	scanf("%f",&hoa);
	
	//Tinh Diem Trung Binh
	diemtrungbinh = (toan*3+li*2+hoa)/6;
	
	//xuat ket qua
	printf("Diem Trung Binh cua thi sinh la: %.2f",diemtrungbinh);
	getchar();
	return 0;
}
