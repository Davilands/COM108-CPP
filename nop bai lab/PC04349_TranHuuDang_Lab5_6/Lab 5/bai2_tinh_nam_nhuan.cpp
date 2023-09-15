/*Tran Huu Dang, PC04349
	bai2 Lab5: Xay dung ham tinh Nam Nhuan */
#include <stdio.h>
int namNhuan(int n){
	int check;
	if(n%400==0)
		check=1;
	if(n%4==0 && n%100!=0)
		check=1;
return check;
}
int main(){
	int n;
	printf("Chuong trinh xet nam nhuan\n");
	printf("Nhap vao nam can xet: ");scanf("%d",&n);
		if(namNhuan(n)==1)
			printf("%d la nam nhuan",n);
		else
			printf("%d khong phai nam nhuan",n);
return 0;
}
