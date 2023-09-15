//Ten: Tran Huu Dang 
//MSSV: Dangthpc04349
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int tiepTuc;
void doiMau(const char *color) {
	char cmd[512];
	sprintf(cmd,"echo|set /p=\"\e[%sm\"",color);
	system(cmd);
}
void bai4 () {		
	int soKW;
	printf ("Nhap vao so dien(kWh) su dung: "); scanf("%d",&soKW);
	if (soKW<0) printf("Ban nhap sai, vui long nhap lai!");
	else if (soKW<=50) printf("So tien phai tra la: %.2f",soKW*1.678);
	else if (soKW<=100) printf("So tien phai tra la: %.2f",50*1.678 + (soKW-50)*1.734);
	else if (soKW<=200) printf("So tien phai tra la: %.2f",50*1.678 + 50*1.734 + (soKW-100)*2.014);
	else if (soKW<=300) printf("So tien phai tra la: %.2f",50*1.678 + 50*1.734 + 100*2.014 + (soKW-200)*2.536);
	else if (soKW<=400) printf("So tien phai tra la: %.2f",50*1.678 + 50*1.734 + 100*2.014 + 100*2.536 + (soKW-300)*2.834);
	else printf("So tien phai tra la: %.2f",50*1.678 + 50*1.734 + 100*2.014 + 100*2.536 + 100*2.834 + (soKW-400)*2.927);
}

int main () {
		int chon;		
MENU: do {	
		printf("\n\t\t\t                     Menu Chuong Trinh: \n");
		printf("\t\t\t+------------------------------------------------------------------+\n");
		printf("\t\t\t|    Nhap 1 : Chuc nang kiem tra so nguyen                         |\n");
		printf("\t\t\t|    Nhap 2 : Chuc nang tim uoc chung va boi chung cua hai so      |\n");
		printf("\t\t\t|    Nhap 3 : Chuc nang tinh tien cho quan karaoke                 |\n");
		printf("\t\t\t|    Nhap 4 : Chuc nang tinh tien dien                             |\n");
		printf("\t\t\t|    Nhap 5 : Chuc nang doi tien                                   |\n");
		printf("\t\t\t|    Nhap 6 : Chuc nang tinh lai suat vay ngan hang, vay tra gop   |\n");
		printf("\t\t\t|    Nhap 7 : Chuc nang vay tien mua xe                            |\n");
		printf("\t\t\t|    Nhap 8 : Chuc nang sap xep thong tin sinh vien                |\n");
		printf("\t\t\t|    Nhap 9 : Xay dung game FPOLY-LOTT                             |\n");
		printf("\t\t\t|    Nhap 10: Chuc nang tinh toan phan so                          |\n");
		printf("\t\t\t|    Nhap 0 : Thoat                                                |\n");
		printf("\t\t\t+------------------------------------------------------------------+\n");
		printf("Lua chon cua ban la: "); scanf("%d",&chon);
		switch (chon) {
			case 1: {
				printf("1: Day la Chuong trinh kiem tra so nguyen\n");
				do {
					//bai4();
					printf("\n\n[BAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG?] \n"); 
					printf("1: Dung tiep!\n0: Thoat tinh nang!\n");
					scanf("%d",&tiepTuc);   
					if (tiepTuc==0) {
						goto MENU;
					}
				} while (tiepTuc!=0);
			} 

			case 2: {
				printf("2: Day la Chuong trinh tim uoc chung va boi chung cua hai so\n"); 
				do {
					//bai4();
					printf("\n\n[BAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG?] \n"); 
					printf("1: Dung tiep!\n0: Thoat tinh nang!\n");
					scanf("%d",&tiepTuc);   
					if (tiepTuc==0) {
						goto MENU;
					}
				} while (tiepTuc!=0);
			}
				
			case 3: {
				printf("3: Day la Chuong trinh tinh tien cho quan karaoke\n");
				do {
					//bai4();
					printf("\n\n[BAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG?] \n"); 
					printf("1: Dung tiep!\n0: Thoat tinh nang!\n");
					scanf("%d",&tiepTuc);   
					if (tiepTuc==0) {
						goto MENU;
					}
				} while (tiepTuc!=0);
			}
				
			case 4: {
				printf("4: Day la Chuong trinh tinh tien dien\n");
				do {
					bai4();
					doiMau("01;31");
					printf("\n\n[BAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG?] \n"); 
					printf("1: Dung tiep tinh nang!\n0: Thoat tinh nang!\n");
					scanf("%d",&tiepTuc);   
					if (tiepTuc==0) {
						goto MENU;
					}
				} while (tiepTuc!=0);
			}
			
			case 5: {
				printf("5: Day la Chuong trinh doi tien\n"); 
				do {
					//bai4();
					printf("\n\n[BAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG?] \n"); 
					printf("1: Dung tiep!\n0: Thoat tinh nang!\n");
					scanf("%d",&tiepTuc);   
					if (tiepTuc==0) {
						goto MENU;
					}
				} while (tiepTuc!=0);
			}
						
			case 6: {
				printf("6: Day la Chuong trinh tinh lai suat vay ngan hang, vay tra gop\n"); 
				do {
					//bai4();
					printf("\n\n[BAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG?] \n"); 
					printf("1: Dung tiep!\n0: Thoat tinh nang!\n");
					scanf("%d",&tiepTuc);   
					if (tiepTuc==0) {
						goto MENU;
					}
				} while (tiepTuc!=0);
			}
			
			case 7: {
				printf("7: Day la Chuong trinh vay tien mua xe\n");
				do {
					//bai4();
					printf("\n\n[BAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG?] \n"); 
					printf("1: Dung tiep!\n0: Thoat tinh nang!\n");
					scanf("%d",&tiepTuc);   
					if (tiepTuc==0) {
						goto MENU;
					}
				} while (tiepTuc!=0);
			}
				
			case 8: {
				printf("8: Day la Chuong trinh sap xep thong tin sinh vien\n");
				do {
					//bai4();
					printf("\n\n[BAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG?] \n"); 
					printf("1: Dung tiep!\n0: Thoat tinh nang!\n");
					scanf("%d",&tiepTuc);   
					if (tiepTuc==0) {
						goto MENU;
					}
				} while (tiepTuc!=0);
			}
				
			case 9: {
				printf("9: Day la Chuong trinh Xgame FPOLY-LOTT\n");
				do {
					//bai4();
					printf("\n\n[BAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG?] \n"); 
					printf("1: Dung tiep!\n0: Thoat tinh nang!\n");
					scanf("%d",&tiepTuc);   
					if (tiepTuc==0) {
						goto MENU;
					}
				} while (tiepTuc!=0);
			}
				
			case 10: {
				printf("10: Day la Chuong trinh tinh toan phan so\n");
				do {
					//bai4();
					printf("\n\n[BAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG?] \n"); 
					printf("1: Dung tiep!\n0: Thoat tinh nang!\n");
					scanf("%d",&tiepTuc);   
					if (tiepTuc==0) {
						goto MENU;
					}
				} while (tiepTuc!=0);
			}				
					
			case 0: {printf("Ban chon ket thuc! Xin cam on, Tam biet!");
				return 0;  
			}
				
			default : printf("Vui long nhap lai tu 0 den 10 \n"); 
		} 
		
	} 
	while (chon<1 || chon>10); 
	
//TROLAI: {
//			printf("\nDa hoan thanh chuong trinh! \n");
//				printf("[BAN CO MUON TIEP TUC HAY KHONG?] (1 or 0)\n"); 
//				scanf("%d",&tiepTuc);   
//				if (tiepTuc==0) {
//					printf("Ban chon ket thuc! Xin cam on, Tam biet!");
//					return 0;
//				}
//				if (tiepTuc==1) goto MENU;  
//		}
//		
	return 0;
}
