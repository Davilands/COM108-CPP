#include <stdio.h>
#include <math.h>
int main () {
	int n,i;
	printf("Nhap vao gia tri N = "); scanf("%d",&n);
	if (n<2) printf("%d Khong phai so nguyen to!",n);
	else {
		for (i=2; i<=sqrt(n); i++) {					// [2;sqrt(n)] <uoc> ---> NO  ---> STOP				
			if (n%i == 0){								//9 [2;3] --> NO				
				printf("%d Khong la so nguyen to!",n);  //11 [2;3] --> Yes  
				return 0;
			} 											//  ---> YES
		} printf("%d La so nguyen to!",n);
	}
	return 0;
}
