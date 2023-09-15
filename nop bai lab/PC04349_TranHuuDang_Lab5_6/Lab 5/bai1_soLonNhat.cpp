/*Tran Huu Dang, PC04349
	bai1 Lab5: Tim so lon nhat trong 3 so */
#include <stdio.h>
int soLonNhat(int x, int y, int z) {
	int max;	max = x;
	if (y>max) 	max = y;
	if (z>max) 	max = z;
return max;
}
int main() {
	int a,b,c;
	printf("Chuong trinh tim so lon nhat trong 3 so\n");
	printf("Nhap vao gia tri a = ");scanf("%d",&a);
	printf("Nhap vao gia tri b = ");scanf("%d",&b);
	printf("Nhap vao gia tri c = ");scanf("%d",&c);
	printf("So lon nhat trong ba so la: %d",soLonNhat(a,b,c));
return 0;
}
