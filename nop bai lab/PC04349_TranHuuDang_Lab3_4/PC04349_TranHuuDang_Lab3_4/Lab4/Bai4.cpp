#include <stdio.h>
#include <math.h>
//Ten: Tran Huu Dang, MSSV: DangthPC04349
int main () {
	int chon;
do {	printf("\n\nMenu Chuong Trinh: \n");
		printf("Nhap 1: Tinh trung binh tong\n");
		printf("Nhap 2: Tim so nguyen to\n");
		printf("Nhap 3: Tim so chinh phuong\n");
		printf("Nhap 4: Thoat\n");
		printf("Moi ban lua chon!\n");
		printf("Lua chon cua ban la: "); scanf("%d",&chon);
		switch (chon) {
			case 1: {
				printf("1: Day la Chuong trinh tinh trung binh tong\n");
				int min, max,i ;
				float tong , bienDem , trungBinh ;
				printf("Nhap vao gia tri min va max: ");
				scanf("%d %d",&min,&max);
				i=min;
	while( i<= max) {
		if(i%2==0){
			tong+=i;
			bienDem++;			
		}
		i++;
	}
	trungBinh=tong/bienDem;
	printf("Gia tri trung binh tu %d den %d la: %.2f",min,max,trungBinh);
				break; 
			}
			case 2: {
				printf("2: Day la Chuong trinh tim so nguyen to\n");
				int n,i;
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
			
				break;
			}
			case 3: { 
				printf("3: Day la Chuong tinh tim so chinh phuong\n");
				int n,i,d;
				printf("Nhap vao gia tri N: "); scanf("%d",&n);
				for (i=1; i<=n; i++) { 
					if (i*i==n) {							    	
						d=1;
						break;
		}
	}			if (d=1) printf("%d la so chinh phuong!",n);											
				else printf ("%d Khong phai so chinh phuong!",n); 
				break;
			}		
			case 4: printf("Ban chon ket thuc! Xin cam on, Tam biet!");
				break;
			default : printf("Vui long nhap lai tu 1 den 4 \n"); 
		} 
	} 
while (chon != 4); 
	return 0;
	}	
