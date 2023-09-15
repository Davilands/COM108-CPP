/*Tran Huu Dang, PC04349
	bai1 Lab6: Tinh TBT cac so chia het cho 3 trong mang */
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
float trungBinhTong(int a[], int n) {
	int i,tong,dem;
	float trungBinh;
	
	trungBinh=0; tong=0;
	for (i=0; i<n; i++) {
		if (a[i]%3==0) {
			tong=tong+a[i];
			dem++;
		}
	} trungBinh=tong/dem;
	return trungBinh;	
}
int main () {
	int a[100];
	int n,i,tong,dem;
	float trungBinh;
	printf("Chuong trinh tinh Trung binh tong cac so chia het cho 3\n");
	printf("Nhap vao so phan tu cua mang: "); scanf("%d",&n);
		nhapMang(a,n);
	printf("Mang vua nhap la: \n");
		xuatMang(a,n);
	printf("\nTrung binh tong cac so chia het cho 3 la: %.2f",trungBinhTong(a,n));
return 0;	
}
