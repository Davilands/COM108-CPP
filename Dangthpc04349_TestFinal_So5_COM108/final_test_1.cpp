/*	
	DangthPC04349_COM108_Final_test_1

	*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void cau1() {
	char chuoi[100];
printf("Chuong trinh Chuoi ky tu!\n");
	printf("Moi ban nhap vao chuoi ky tu: "); gets(chuoi);
	printf("\n\n\t\tChuoi vua nhap la: '%s'",chuoi);
	printf("\n\t\tChuoi sau khi in HOA la: '%s'\n",strupr(chuoi));
}
int main() {
	cau1();
return 0;	
}
