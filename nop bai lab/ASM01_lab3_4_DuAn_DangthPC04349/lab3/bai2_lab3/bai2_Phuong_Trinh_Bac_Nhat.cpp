#include <stdio.h>
//ten: Tran Huu Dang 
//MSSV: DangthPC04349

int main () {
	float a, b;
	printf("Nhap vao gia tri a :"); scanf("%f",&a);
	printf("Nhap vao gia tri b :"); scanf("%f",&b);
	if (a==0) 
		if (b==0) 
			printf("Phuong trinh co vo so nghiem!");
		 else 
			printf ("Phuong trinh vo nghiem");
		
	 else 
		printf("Phuong trinh co nghiem x= %.2f",-b/a);		
return 0;
}
