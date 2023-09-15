#include <stdio.h>
#include<math.h>
//Ten: Tran Huu Dang, MSSV: DangthPC04349
int main () {
	int chon,delta,soKW;
	float a, b,c,diem;
do {
	printf("\n\nMenu Chuong Trinh: \n");
	printf("Nhap 1: Tinh diem hoc luc\n");
	printf("Nhap 2: Tinh chuong trinh bac nhat\n");
	printf("Nhap 3: Tinh chuong trinh bac hai\n");
	printf("Nhap 4: Tinh tien dien\n");
	printf("Nhap 0: Thoat khoi chuong trinh\n");
	printf("Moi ban lua chon!\n");
	printf("______________________________________\n");
	printf("Lua chon cua ban la: "); scanf("%d",&chon);
	
	switch (chon) {
		case 1: {
			printf("1: Day la Chuong trinh tinh diem hoc luc\n");
			printf("Nhap vao diem cua sinh vien: ");
	scanf("%f",&diem);
	do {
		if (diem>10) {
			printf("Khong co diem vuot qua 10, moi ban nhap lai: ");
			scanf("%f",&diem);
		}
		else if (diem>=9) {
			printf("Ban co hoc luc xuat sac!");
			break;
		}
		else if (diem>=8) {
			printf("Ban co hoc luc gioi!");
			break;
		}
		else if (diem>=6.5) {
			printf("Ban co hoc luc kha!");
			break; 
		}
		else if (diem>=5) {
			printf("Ban co hoc luc trung binh!");
			break;
		}
		else if (diem>=3.5) {
			printf("Ban co hoc luc yeu!");
			break;
		}
		else if (diem>=0) {
			printf("Ban co hoc luc kem!");
			break;
		}
		else {
			printf("Khong co diem nao nho hon 0, moi ban nhap lai: ");
			scanf("%f",&diem);
		}
	}while (diem>0|| diem<10);
			break; 
		}
		case 2: { 
			printf("2: Day la Chuong tinh phuong trinh bac nhat\n");
			printf("Nhap vao gia tri a :"); scanf("%f",&a);
			printf("Nhap vao gia tri b :"); scanf("%f",&b);
			if (a==0) 
				if (b==0) 
				printf("Phuong trinh co vo so nghiem!");
				 else 
				printf ("Phuong trinh vo nghiem");		
	 		else 
				printf("Phuong trinh co nghiem x= %.2f",-b/a);	
			break;
		}	
		case 3: {
			printf("3: Day la Chuong tinh phuong trinh bac hai\n");
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
				break;
		}
		case 4: { 
			printf("4: Day la Chuong tinh tien dien\n");
			printf ("Nhap vao so dien(kWh) su dung: "); scanf("%d",&soKW);	
			if (soKW<0) printf("Ban nhap sai, vui long nhap lai!");
			else if (soKW<=50) printf("So tien phai tra la: %.2f",soKW*1.678);
	
			else if (soKW<=100) printf("So tien phai tra la: %.2f",50*1.678 + (soKW-50)*1.734);
	
			else if (soKW<=200) printf("So tien phai tra la: %.2f",50*1.678 + 50*1.734 + (soKW-100)*2.014);
	
			else if (soKW<=300) printf("So tien phai tra la: %.2f",50*1.678 + 50*1.734 + 100*2.014 + (soKW-200)*2.536);
	
			else if (soKW<=400) printf("So tien phai tra la: %.2f",50*1.678 + 50*1.734 + 100*2.014 + 100*2.536 + (soKW-300)*2.834);
	
			else printf("So tien phai tra la: %.2f",50*1.678 + 50*1.734 + 100*2.014 + 100*2.536 + 100*2.834 + (soKW-400)*2.927);
			break;
		}
		case 0: printf("Xin cam on, Tam biet!");
			break;
		default: printf("Vui long nhap lai tu 0 den 4\n");
			break;
	} 
	} 
while (chon != 0) ;
	return 0;
	}	
