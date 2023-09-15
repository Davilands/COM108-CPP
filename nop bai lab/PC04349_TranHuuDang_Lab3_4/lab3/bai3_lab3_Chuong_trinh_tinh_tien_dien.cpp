#include <stdio.h> //MSSV: DangthPC04349
int main () {		//ten: Tran Huu Dang
	printf ("Bai 3: Xay dung chuong trinh tinh tien dien \n");
	printf ("--------------------------------------------\n");
	int soKW;
	do {
		printf ("Nhap vao so dien(kWh) su dung: "); scanf("%d",&soKW);
	if (soKW<0) printf("Ban nhap sai, vui long nhap lai!\n");
	
	else if (soKW<=50) printf("So tien phai tra la: %d VND ",soKW*1678);
	
	else if (soKW<=100) printf("So tien phai tra la: %d VND ",50*1678 + (soKW-50)*1734);
	
	else if (soKW<=200) printf("So tien phai tra la: %d VND",50*1678 + 50*1734 + (soKW-100)*2014);
	
	else if (soKW<=300) printf("So tien phai tra la: %d VND",50*1678 + 50*1734 + 100*2014 + (soKW-200)*2536);
	
	else if (soKW<=400) printf("So tien phai tra la: %d VND",50*1678 + 50*1734 + 100*2014 + 100*2536 + (soKW-300)*2834);
	
	else printf("So tien phai tra la: %d VND",50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (soKW-400)*2927);
	
	} while (soKW<1);
getchar;
return 0;
}

