/*Tran Huu Dang, PC04349
	bai2 Lab6: Tim MIN va MAX trong mang */
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
int timMIN(int a[], int n){
	int i,min;
	min=a[0];
	for (i=1; i<n; i++) {
		if (a[i]<min) min=a[i];
	}
return min;	
}
int timMAX(int a[], int n){
	int i,max;
	max=a[0];
	for (i=1; i<n; i++) {
		if (a[i]>max) max=a[i];
	}
return max;	
}
int main () {
	int a[100];
	int n,i,tong,dem;
	float trungBinh;
	printf("Tim MIN va MAX trong mang\n");
	printf("Nhap vao so phan tu cua mang: "); scanf("%d",&n);
		nhapMang(a,n);
	printf("Mang vua nhap la: \n"); 
		xuatMang(a,n);
	printf("\nPhan tu lon nhat trong mang la: %d\n",timMAX(a,n));
	printf("Phan tu nho nhat trong mang la: %d",timMIN(a,n));
return 0;	
}
