/*Tran Huu Dang, PC04349
	bai3 Lab5: Xay dung ham hoan vi 3 so */
#include <stdio.h>
void hoanVi (int *a, int *b) {
	int t;
	t   = *a;
	*a	= *b;
	*b	=  t;
}
int main () {
	int a,b;
	printf("Chuong trinh hoan vi 2 so\n");
	printf("Nhap vao so a: "); scanf("%d",&a);
	printf("Nhap vao so b: "); scanf("%d",&b);
	
	printf("Khi chua hoan vi: a = %d va b = %d \n",a,b);
	hoanVi(&a,&b);
	printf("Khi  da  hoan vi: a = %d va b = %d ",a,b);
	printf ("%d",*a);
return 0;	
}
