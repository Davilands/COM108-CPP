#include <stdio.h>
//Ten: Tran Huu Dang, MSSV: DangthPC04349
int main () {
	int chon;
	printf("Menu Chuong Trinh: \n");
	printf("Nhap 1: Tinh diem hoc luc\n");
	printf("Nhap 2: Tinh chuong trinh bac nhat\n");
	printf("Nhap 3: Tinh chuong trinh bac hai\n");
	printf("Nhap 4: Tinh tien dien\n");
	printf("Nhap 0: Thoat khoi chuong trinh\n");
	printf("Moi ban lua chon!\n");
	printf("______________________________________\n");
	printf("Lua chon cua ban la: "); scanf("%d",&chon);
	
	switch (chon) {
		case 1: printf("1: Day la Chuong trinh tinh diem hoc luc");
			break;
		case 2: printf("2: Day la Chuong tinh phuong trinh bac nhat");
			break;
		case 3: printf("3: Day la Chuong tinh phuong trinh bac hai");
			break;
		case 4: printf("4: Day la Chuong tinh tien dien");
			break;
		case 0: printf("Xin cam on, Tam biet!");
			break;
		default: printf("Vui long nhap lai tu 0 den 4");
			break;
	} 
	return 0;
	}	
