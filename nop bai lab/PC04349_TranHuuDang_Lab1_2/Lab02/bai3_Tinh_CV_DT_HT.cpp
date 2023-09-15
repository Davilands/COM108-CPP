#include <stdio.h> //DangthPC04349
#define pi 3.14    //khai bao hang gia tri so PI
int main () {
	int r;       //khai bao ban kinh kieu so nguyen
	float c,s;  //khai bao ChuVi, DienTich kieu so thuc
	
	printf("Bai3: Xay dung chuong trinh tinh dien tich, chu vi cua hinh tron \n");
	printf("Nhap vao ban kinh hinh tron r= ");
	scanf("%d",&r); //Nhap ban kinh tu ban phim
	
	c = 2*r*pi; //tinh ChuVi
	s=r*r*pi;    //tinh DienTich
	
	// xuat gia tri ChuVi va DienTich
	printf("Dien tich duong tron la: %.2f \n",s); 
	printf("Chu vi duong tron la: %.2f \n",c);
	
	getchar();
	return 0;
}
