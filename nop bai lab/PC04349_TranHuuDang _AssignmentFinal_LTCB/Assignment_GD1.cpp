/*  Ten: Tran Huu Dang 
	MSSV: pc04349
	ASSIGNMENT Nhap Mon Lap Trinh
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int tiepTuc;

int main () {
		int chon;		
	MENU: 
		do {	
			printf("\n\t\t	                     Menu Chuong Trinh\n");
			printf("\t\t\t+------------------------------------------------------------------+\n");
			printf("\t\t\t|    Nhap 1 : Chuc nang kiem tra so nguyen                         |\n");
			printf("\t\t\t|    Nhap 2 : Chuc nang tim UCLN va BCNN cua hai so                |\n");
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
				case 0: {
					printf("Ban chon ket thuc! Xin cam on, Tam biet!");
					return 0;  
				}	
				case 1: {
					printf("1: Day la Chuong trinh kiem tra so nguyen\n");
					do {
						printf("\n\nBAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG? \n"); 
						printf("1: Dung tiep tinh nang!\n0: Tro ve MENU chuong trinh!\n");
						printf("Lua chon cua ban la: ");
						scanf("%d",&tiepTuc);   
						if (tiepTuc==0) {
							system("cls");
							goto MENU;
						}
					} while (tiepTuc!=0);
				} 
	
				case 2: {
					printf("2: Day la Chuong trinh tim UCLN va BCNN cua hai so\n"); 
					do {
						printf("\n\nBAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG? \n"); 
						printf("1: Dung tiep tinh nang!\n0: Tro ve MENU chuong trinh!\n");
						printf("Lua chon cua ban la: ");
						scanf("%d",&tiepTuc);   
						if (tiepTuc==0) {
							system("cls");
							goto MENU;
						}
					} while (tiepTuc!=0);
				}
					
				case 3: {
					printf("3: Day la Chuong trinh tinh tien cho quan karaoke\n");
					do {
						printf("\n\nBAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG? \n"); 
						printf("1: Dung tiep tinh nang!\n0: Tro ve MENU chuong trinh!\n");
						printf("Lua chon cua ban la: ");
						scanf("%d",&tiepTuc);   
						if (tiepTuc==0) {
							system("cls");
							goto MENU;
						}
					} while (tiepTuc!=0);
				}
					
				case 4: {
					printf("4: Day la Chuong trinh tinh tien dien\n");
					do {
						printf("\n\nBAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG? \n"); 
						printf("1: Dung tiep tinh nang!\n0: Tro ve MENU chuong trinh!\n");
						printf("Lua chon cua ban la: ");
						scanf("%d",&tiepTuc);  
						if (tiepTuc==0) {
							system("cls");
							goto MENU;
						}
					} while (tiepTuc!=0);
				}
				
				case 5: {
					printf("5: Day la Chuong trinh doi tien\n"); 
					do {
						printf("\n\nBAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG? \n"); 
						printf("1: Dung tiep tinh nang!\n0: Tro ve MENU chuong trinh!\n");
						printf("Lua chon cua ban la: ");
						scanf("%d",&tiepTuc);  
						if (tiepTuc==0) {
							system("cls");
							goto MENU;
						}
					} while (tiepTuc!=0);
				}
							
				case 6: {
					printf("6: Day la Chuong trinh tinh lai suat vay ngan hang, vay tra gop\n"); 
					do {
						printf("\n\nBAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG? \n"); 
						printf("1: Dung tiep tinh nang!\n0: Tro ve MENU chuong trinh!\n");
						printf("Lua chon cua ban la: ");
						scanf("%d",&tiepTuc);   
						if (tiepTuc==0) {
							system("cls");
							goto MENU;
						}
					} while (tiepTuc!=0);
				}
				
				case 7: {
					printf("7: Day la Chuong trinh vay tien mua xe\n");
					do {
						printf("\n\nBAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG? \n"); 
						printf("1: Dung tiep tinh nang!\n0: Tro ve MENU chuong trinh!\n");
						printf("Lua chon cua ban la: ");
						scanf("%d",&tiepTuc);   
						if (tiepTuc==0) {
							system("cls");
							goto MENU;
						}
					} while (tiepTuc!=0);
				}
					
				case 8: {
					printf("8: Day la Chuong trinh sap xep thong tin sinh vien\n");
					do {
						getchar();
						printf("\n\nBAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG? \n"); 
						printf("1: Dung tiep tinh nang!\n0: Tro ve MENU chuong trinh!\n");
						printf("Lua chon cua ban la: ");
						scanf("%d",&tiepTuc);   
						if (tiepTuc==0) {
							system("cls");
							goto MENU;
						}
					} while (tiepTuc!=0);
				}
					
				case 9: {
					printf("9: Day la Chuong trinh Xgame FPOLY-LOTT\n");
					do {
						printf("\n\nBAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG? \n");
						printf("1: Dung tiep tinh nang!\n0: Tro ve MENU chuong trinh!\n");
						printf("Lua chon cua ban la: ");
						scanf("%d",&tiepTuc);   
						if (tiepTuc==0) {
							system("cls");
							goto MENU;
						}
					} while (tiepTuc!=0);
				}	
				case 10: {
					printf("10: Day la Chuong trinh tinh toan phan so\n");
					printf("[LUU Y: Nhap vao hai phan so nguyen!]\n");
					do {
						printf("\n\nBAN CO MUON TIEP TUC DUNG TINH NANG HAY KHONG? \n"); 
						printf("1: Dung tiep tinh nang!\n0: Tro ve MENU chuong trinh!\n");
						printf("Lua chon cua ban la: ");
						scanf("%d",&tiepTuc);
						if (tiepTuc==0) {
							system("cls");
							goto MENU;
						}
					} while (tiepTuc!=0);
				}
				default : 
					system("cls");
					printf("\n\nVui long nhap lai tu 0 den 10 \n"); 
			} 	
		} while (chon<1 || chon>10); 
		
	return 0;
}
