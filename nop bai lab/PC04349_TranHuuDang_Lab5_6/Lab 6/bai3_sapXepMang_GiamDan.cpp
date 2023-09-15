/*Tran Huu Dang, PC04349
	bai3 Lab6: Sap xep mang Giam Dan */
#include <stdio.h>
void nhapMang( int a[], int n) {
	int i;
	for (i=0; i<n; i++) {
		printf("A[%d]: ",i); scanf("%d",&a[i]);
	}
}
void xuatMang( int a[], int n) {
	int i;
	for (i=0; i<n; i++) {
		printf("%d	",a[i]); 
	}
}
void hoanVi(int &a, int &b) {
	int t;
	t   =  a;
	a	=  b;
	b	=  t;
}
void giamDan(int a[], int n){
	int i,j;
	for (i=0; i<n-1; i++) {
		for (j=i+1; j<n; j++) {
			if (a[i]<a[j]) {
				hoanVi(a[i],a[j]);
			}
		}	
	}
}
int main () {
	int a[100];
	int n,i,tong,dem;
	float trungBinh;
	printf("Chuong trinh sap xep amng giam dan\n");
	printf("Nhap vao so phan tu cua mang: "); scanf("%d",&n);
		nhapMang(a,n);
	printf("Mang khi chua sap xep la: \n");
		xuatMang(a,n);
	printf("\n\nMang khi sap xep theo thu tu giam dan la: \n");
		giamDan(a,n);
		xuatMang(a,n);
	
return 0;	
}
