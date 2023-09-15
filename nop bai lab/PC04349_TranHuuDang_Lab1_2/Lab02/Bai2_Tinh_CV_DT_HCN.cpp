#include <stdio.h> //DangthPC04349
int main (){
	int chieudai,chieurong,dientich,chuvi;
	printf("Tnh ChuVi, DienTich cua Hinh Chu Nhat\n");
	printf("Nhap vao chieu dai HCN:  ");
		scanf("%d",&chieudai);
	printf("Nhap vao chieu rong HCN: ");
		scanf("%d",&chieurong);
	//nhap vao ChieuDai va ChieuRong cua HCN
		
		dientich=chieudai*chieurong;
		chuvi=(chieudai+chieurong)*2;
	//Tinh DienTich va ChuVi HCN
		
	printf("Chu vi HCN la: %d \n",chuvi);
	printf("Dien tich HCN la: %d  ",dientich);
	//Xuat ra ket qua


getchar();
return 0;
}
