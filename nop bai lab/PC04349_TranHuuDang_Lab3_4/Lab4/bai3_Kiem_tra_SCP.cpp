#include <stdio.h> //Tran Huu Dang PC04349
int main () {		//Chuong trinh kiem tra so chinh phuong
	int n,i;
	printf("Chuong trinh kiem tra so chinh phuong\n");
	printf("Nhap vao gia tri N: "); scanf("%d",&n);
	for (i=1; i<n; i++) { 
		if (i*i==n) {							    	
			printf ("%d La so chinh phuong!", n);
			return 0;
		}
	}													
	printf ("%d Khong phai so chinh phuong!",n);
	
return 0;		
}
