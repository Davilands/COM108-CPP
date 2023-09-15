#include <stdio.h>
int main () {
	int n,i;
	printf("Nhap vao gia tri N: "); scanf("%d",&n);
	for (i=1; i<=n; i++) { 
		if (i*i==n) {							    	// [2;n-1] i^2=n ---> YES  ---> STOP	
			printf ("%d La so chinh phuong!", n);
			return 0;
		}
	}													// [1;n-1] n^2<>i ---> NO
	printf ("%d Khong phai so chinh phuong!",n);
	
return 0;		
}
