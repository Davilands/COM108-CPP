/*	
	DangthPC04349_COM108_Final_test_3

	*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void nhap(int a[], int n) {
	for (int i=0; i<n; i++) {
		printf("A[%d]: ",i); scanf("%d",&a[i]);
	}
}
void xuat(int a[], int n) {
	for (int i=0; i<n; i++) {
		printf("A[%d]: %d\n",i,a[i]); 
	}	
}
void giam(int a[], int n){
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++ )
		if (a[i]<a[j]) {
			int tam;
			tam=a[i];
			a[i]=a[j];
			a[j]=tam;
		}
	}	
}
int max(int a[], int n) {
	int max=a[0];
	for (int i=1; i<n; i++) {
		if (max<a[i])
			max=a[i];
	}
	return max;	
}
void binhPhuong(int a[], int n) {
	for (int i=0; i<n; i++) {
		printf("A[%d]: %d\n",i,a[i]*a[i]); 
	}	
}
float trungBinh(int a[], int n) {
	float tb=0;
	int d=0, tong=0;
	for (int i=0; i<n; i++) {
		tong=tong+a[i];
		d++;
	}
	tb=tong/(float)d;
	return tb;
}
void cau3() {
	int a[100],n;
	float m;

nhapLai:
	printf("Chuong trinh Mang moi chieu!\n");
	printf("Moi ban nhap vao so phan tu trong mang (N): "); scanf("%f",&m);
	if (m==(int)m) n=(int)m;
	else {
		printf("\t\tBan can nhap so nguyen!\n\n");
		goto nhapLai;
	}
	printf("\n\t\tXin moi nhap du lieu cho mang!\n");
	nhap(a,n);
	printf("\n\t\tMang ban vua nhap la: \n");
	xuat(a,n);
	printf("\n\t\tMang sau khi sap xep giam dan la: \n");
	giam(a,n);
	xuat(a,n);
	printf("\n\t\tGia tri lon nhat trong mang la: %d",max(a,n));
	printf("\n\nMang so nguyen sau khi binh phuong la:\n");
	binhPhuong(a,n);
	printf("\n\t\tTrung binh cac phan tu trong mang la: %.2f",trungBinh(a,n));
}
int main() {
	cau3();
return 0;	
}

