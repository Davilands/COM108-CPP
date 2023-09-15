/*Tran Huu Dang, PC04349
	bai4 Lab6: Tinh binh phuong cac phan tu trong ma tran */
#include <stdio.h>
void nhapMaTran( int a[100][100], int n, int m) {
	int i,j;
	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
		printf("A[%d;%d]: ",i,j); scanf("%d",&a[i][j]);
		}
	}
}
void xuatMaTran( int a[100][100], int n, int m) {
	int i,j;
	for (i=0; i<n; i++) {
		for (j=0; j<m; j++)
			printf(" %.2d ",a[i][j]); 
		printf("\n");
	} 
}
void maTranBinhPhuong( int a[100][100], int n, int m) {
	int i,j;
	for (i=0; i<n; i++) {
		for (j=0; j<m; j++)
			printf(" %.2d ",a[i][j]*a[i][j]); 
		printf("\n");
	} 
}
int main () {
	int a[100][100];
	int n,m;
	float trungBinh;
	printf("Chuong trinh tinh binh phuong ma tran\n");
	printf("Nhap vao so hang: "); scanf("%d",&n);
	printf("Nhap vao so cot: "); scanf("%d",&m);
	nhapMaTran(a,n,m);
	
	printf("Ma tran vua nhap la: \n");
	xuatMaTran(a,n,m);
	
	printf("\n\nMa tran binh phuong la: \n");
	maTranBinhPhuong(a,n,m);	
	
return 0;	
}
