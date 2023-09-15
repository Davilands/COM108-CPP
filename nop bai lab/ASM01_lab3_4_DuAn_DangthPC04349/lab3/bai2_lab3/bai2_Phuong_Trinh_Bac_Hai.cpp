#include <stdio.h>  //MSSV: DangthPC04349
#include <math.h>	//ten: Tran Huu Dang






































int main() {
	int delta;
	float a,b,c;
	printf("Nhap vao gia tri a :"); scanf("%f",&a);
	printf("Nhap vao gia tri b :"); scanf("%f",&b);
	printf("Nhap vao gia tri c :"); scanf("%f",&c);
	if (a!=0) {
		delta = b*b-4*a*c;
		if (delta<0) 
			printf("Phuong trinh vo nghiem!");	
		else if (delta==0) 
			printf("Phuong trinh co nghiem kep x = %.2f",-b/(2*a));
		else 
			printf ("Phuong trinh co hai nghiem phan biet x1= %.2f va x2= %.2f",(-b+sqrt(delta))/2*a,(-b-sqrt(delta))/2*a ); 
	}else 
		if (b==0) 
			if (c==0) 
			printf("Phuong trinh co vo so nghiem!");
		 	else 
			printf ("Phuong trinh vo nghiem");
		
		else 
		printf("Phuong trinh co nghiem x= %.2f",-c/b);
return 0;
	}
