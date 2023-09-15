//Ten: Tran Huu Dang 
//MSSV: Dangthpc04349
#include<stdio.h>
#include<string.h>
int main () {
		int chon;
		int tiepTuc;		
MENU: do {	
		printf("\nMenu Chuong Trinh: \n");
		printf("Nhap 1: Chuc nang kiem tra so nguyen\n");
		printf("Nhap 2: Chuc nang tim uoc chung va boi chung cua hai so\n");
		printf("Nhap 3: Chuc nang tinh tien cho quan karaoke\n");
		printf("Nhap 4: Chuc nang tinh tien dien\n");
		printf("Nhap 5: Chuc nang doi tien\n");
		printf("Nhap 6: Chuc nang tinh lai suat vay ngan hang, vay tra gop\n");
		printf("Nhap 7: Chuc nang vay tien mua xe\n");
		printf("Nhap 8: Chuc nang sap xep thong tin sinh vien\n");
		printf("Nhap 9: Xay dung game FPOLY-LOTT\n");
		printf("Nhap 10: Chuc nang tinh toan phan so\n");
		printf("Nhap 0: Thoat\n");
		printf("Moi ban lua chon!\n");
		printf("Lua chon cua ban la: "); scanf("%d",&chon);
		switch (chon) {
			case 1: {
				printf("1: Day la Chuong trinh kiem tra so nguyen\n");
				goto TROLAI;   
			} 

			case 2: {
				printf("2: Day la Chuong trinh tim uoc chung va boi chung cua hai so\n");
				goto TROLAI;	 
			}
				
			case 3: {
				printf("3: Day la Chuong trinh tinh tien cho quan karaoke\n");
				goto TROLAI;  
			}
				
			case 4: {
				printf("4: Day la Chuong trinh tinh tien dien\n");
				goto TROLAI; 
			}
			
			case 5: {
				printf("5: Day la Chuong trinh doi tien\n");
				goto TROLAI; 
			}
						
			case 6: {
				printf("6: Day la Chuong trinh tinh lai suat vay ngan hang, vay tra gop\n");
				goto TROLAI;  
			}
			
			case 7: {
				printf("7: Day la Chuong trinh vay tien mua xe\n");
			goto TROLAI;  
			}
				
			case 8: {
				printf("8: Day la Chuong trinh sap xep thong tin sinh vien\n");
			goto TROLAI; 
			}
				
			case 9: {
				printf("9: Day la Chuong trinh Xgame FPOLY-LOTT\n");
			goto TROLAI; 
			}
				
			case 10: {
				printf("10: Day la Chuong trinh tinh toan phan so\n");
			goto TROLAI;
			}				
					
			case 0: {printf("Ban chon ket thuc! Xin cam on, Tam biet!");
				return 0;  
			}
				
			default : printf("Vui long nhap lai tu 0 den 10 \n"); 
		} 
		
	} 
	while (chon<1 || chon>10); 
	
TROLAI: {
			printf("\nDa hoan thanh chuong trinh! \n");
				printf("[BAN CO MUON TIRP TUC HAY KHONG?] (1 or 0)\n"); 
				scanf("%d",&tiepTuc);   
				if (tiepTuc==0) {
					printf("Ban chon ket thuc! Xin cam on, Tam biet!");
					return 0;
				}
				if (tiepTuc==1) goto MENU;  
		}
		
	return 0;
}
