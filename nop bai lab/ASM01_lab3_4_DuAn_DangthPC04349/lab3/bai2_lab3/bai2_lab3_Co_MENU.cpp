#include <stdio.h>
#include <math.h>
float a,b,c;

int ptb1(float a, float b) {
	if (a==0) {
		if (b==0) {
			printf("Phuong trinh co vo so nghiem!");
		} else {
			printf ("Phuong trinh vo nghiem");
		}
	} else {
		printf("Phuong trinh co nghiem x= %.2f",-b/a);
	}
}
int ptb2(float a, float b, float c) {
	int delta;
	if (a!=0) {
		delta = b*b-4*a*c;
		if (delta<0) {
			printf("Phuong trinh vo nghiem!");	
		} else if (delta==0) {
			printf("Phuong trinh co nghiem kep x = %.2f",-b/(2*a));
		} else {
			printf ("Phuong trinh co hai nghiem phan biet x1= %.2f va x2= %.2f",(-b+sqrt(delta))/2*a,(-b-sqrt(delta))/2*a ); 
		}
	} else { 
			ptb1(b,c);
	}
}
int main () {
int chon;
	printf("Menu chuong trinh\n");
	printf ("1.Giai phuong trinh bac nhat ax+b=0\n");
	printf("2.Giai phuong trinh bac hai ax^2+bx+c=0\n");
	printf("-----------------------------------------\n");
	printf("Moi ban chon(1 hoac 2): ");
	scanf("%d",&chon);
	switch (chon) {
		case 1:
			printf ("1.Giai phuong trinh bac nhat ax+b=0\n");
			printf("Nhap vao he so a = ");
			scanf("%d",&a);
			printf("Nhap vao he so b = ");
			scanf("%d",&b); 
			ptb1(a,b); 
			break;
		case 2:
			printf("2.Giai phuong trinh bac hai ax^2+bx+c=0\n");
			printf("Nhap vao he so a = ");
			scanf("%f",&a);
			if (a==0) {
				printf("[LUU Y: Phuong trinh chuyen doi sang dang ax+b=0]\n");
			}
			printf("Nhap vao he so b = ");
			scanf("%f",&b); 
			printf("Nhap vao he so c = ");
			scanf ("%f",&c);
			ptb2(a,b,c); 
			break;
		default:
		printf("Ban da nhap sai!");
		
	}			
}
	
