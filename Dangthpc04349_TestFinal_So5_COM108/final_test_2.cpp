/*	
	DangthPC04349_COM108_Final_test_2

	*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void cau2() {
	char chuoi[100];
	int n;
printf("Chuong trinh Tinh tong!\n");
	printf("Moi ban nhap vao gia tri N: "); scanf("%d",&n); 
	printf("\n\n\t\tTong cac so chan tu 2 den %d la: ",2*n);
	int tong=0;
//	n=n*2;
	for (int i=2; i<=n*2; i++) {
		if (i%2==0) 
			tong+=i;
	}
	printf("%d\n",tong);
}
int main() {
	cau2();
return 0;	
}

