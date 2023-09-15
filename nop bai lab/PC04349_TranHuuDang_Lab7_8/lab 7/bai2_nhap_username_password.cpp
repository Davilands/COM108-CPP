/*	DangthPC04349
	Nhap mon lap trinh
		Nhap vao username va password de dang nhap
		username: admin
		password: 12345
	*/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void doiMau(const char *color) {
	char cmd[512];
	sprintf(cmd,"echo|set /p=\"\e[%sm\"",color);
	system(cmd);
}
int main() {
	char user[100];
	char userSys[10]="admin";
	int  passSys=12345;
	int  pass,d;
	do {
		printf("Chuong trinh dang nhap\n");
		//INP: Nhap vao UserName va PassWord
		printf("Moi ban nhap USERNAME: "); scanf("%s",&user);
		printf("Moi ban nhap PASSWORD: "); scanf("%d",&pass);
		//Neu dung thi Dang Nhap Thanh Cong
			if (pass==passSys && strcmp(user,userSys)==0) {
					doiMau("1;32");
				printf("Ban da dang nhap thanh cong!");
				doiMau("0;0");
				return 0;
			}	
		//Nguoc lai: Dang nhap khong thanh cong
			else {
				doiMau("1;31");
					printf("\n\t  [ERROR]\nUsername hoac Password khong hop le\n");
				doiMau("0;0");
					printf("Ban co muon dang nhap lai khong?\n");
				doiMau("1;34");
				//Kiem tra nguoi dung muon dang nhap lai khong
					printf("	1: Dang nhap lai!\n	0: Thoat chuong trinh!\n");
				doiMau("0;0");
					printf("Lua chon ban la: ");
					scanf("%d",&d);
					system("cls");
			}
	} while (d!=0);
	printf("\nBan da chon thoat chuong trinh! Xin tam biet.....");

return 0;	
}
