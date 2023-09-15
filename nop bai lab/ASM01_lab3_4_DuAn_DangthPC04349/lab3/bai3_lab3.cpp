#include <stdio.h> //MSSV: DangthPC04349
int main () {		//ten: Tran Huu Dang
	int soKW;
	printf ("Bai 3: Xay dung chuong trinh tinh tien dien \n");
	printf ("--------------------------------------------\n");
	printf ("Nhap vao so dien(kWh) su dung: "); scanf("%d",&soKW);
	
	if (soKW<0) printf("Ban nhap sai, vui long nhap lai!");
	else if (soKW<=50) printf("So tien phai tra la: %.2f",soKW*1.678);
	
	else if (soKW<=100) printf("So tien phai tra la: %.2f",50*1.678 + (soKW-50)*1.734);
	
	else if (soKW<=200) printf("So tien phai tra la: %.2f",50*1.678 + 50*1.734 + (soKW-100)*2.014);
	
	else if (soKW<=300) printf("So tien phai tra la: %.2f",50*1.678 + 50*1.734 + 100*2.014 + (soKW-200)*2.536);
	
	else if (soKW<=400) printf("So tien phai tra la: %.2f",50*1.678 + 50*1.734 + 100*2.014 + 100*2.536 + (soKW-300)*2.834);
	
	else printf("So tien phai tra la: %.2f",50*1.678 + 50*1.734 + 100*2.014 + 100*2.536 + 100*2.834 + (soKW-400)*2.927);
getchar;
return 0;
}

