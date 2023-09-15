#include <stdio.h> //DangthPC04349
int main() {
	printf("Bai 1: Nhap vao hai so a va b tinh tong, hieu, tich , thuong cua hai so\n");
   int a,b; 	//khai bao bien a va b
   
   printf("Moi ban nhap so a:");
   scanf ("%d", &a);	//nhap so a
   printf ("Moi ban nhap so b:");
   scanf ("%d", &b);	//nhap so b
   
   printf ("Tong cua %d va %d la: %d \n", a, b, a+b);
   printf ("Hieu cua %d va %d la: %d \n", a, b, a-b);
   printf ("Tich cua %d va %d la: %d \n", a, b, a*b);
   printf ("Thuong cua %d va %d la: %.2f \n", a, b, (float)a/b);	//ep kieu a,b thanh so thuc
   
   getchar();
   return 0;
}
