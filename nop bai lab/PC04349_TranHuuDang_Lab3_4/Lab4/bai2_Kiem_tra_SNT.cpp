#include <stdio.h>	//Tran Huu Dang PC04349
#include <math.h>	//Chuong trinh kiem tra so nguyen to
int main () {
	int n,i;
	printf("Chuong trinh kiem tra so nguyen to\n");
	printf("Nhap vao gia tri N = "); scanf("%d",&n);
	if (n<2) printf("%d Khong phai so nguyen to!",n);
	else {
		for (i=2; i<=sqrt(n); i++) {						
			if (n%i == 0){											
				printf("%d Khong la so nguyen to!",n);  
				return 0;
			} 										
		} printf("%d La so nguyen to!",n);
	}
	return 0;
}
