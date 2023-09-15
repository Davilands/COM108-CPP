/*	Dangthpc04349
	Nhap mon lap trinh
		Bai 8: Quan li sinh vien
*/
#include <stdio.h>
#include <string.h>
struct sinhVien{
	char MSSV[10];
	char tenSV[50];
	char nganh[50];
	float diem;
};
int main(){
	int n;
	printf("CHUONG TRINH QUAN LI SINH VIEN\n");
	printf ("Nhap so luong sinh vien: "); scanf ("%d", &n);
	printf("%d",n);
	struct sinhVien t,danhSach[50];
	for (int i=0; i<n; i++){
		fflush(stdin);
		printf ("\nThong tin sinh vien thu %d\n", i+1); 
		printf ("Ma so sinh vien: "); gets(danhSach[i].MSSV);
		printf ("Ho ten sinh vien: "); gets(danhSach[i].tenSV);
		printf ("Nganh hoc: "); gets(danhSach[i].nganh);
		printf ("Diem trung binh: "); scanf ("%f", &danhSach[i].diem);
		getchar();
	}
	fflush(stdin);
	//Sap xep
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(danhSach[i].diem > danhSach[j].diem){
				t = danhSach[i];
				danhSach[i] = danhSach[j];
				danhSach[j] = t;
			}
		}
	}
	printf ("\n\t\t\tDANH SACH SINH VIEN\n\n");
		for (int i=0; i<n;i++){
	printf ("\n\nMa so sinh vien: %s\n", danhSach[i].MSSV);
			printf ("Ho ten sinh vien: %s\n", danhSach[i].tenSV);
			printf ("Nganh hoc: %s\n", danhSach[i].nganh);
			printf ("Diem trung binh: %.2f\n", danhSach[i].diem);
	}
	//Tim kiem
	char mssv[10];
	printf ("\n\nNhap MSSV can tim: "); scanf("%s", &mssv);
	for(int i=0; i<n; i++){
		if(strcmp(mssv, danhSach[i].MSSV)==0){
			printf ("\nDa tim thay\n");
			printf ("Ma so sinh vien: %s\n", danhSach[i].MSSV);
			printf ("Ho ten sinh vien: %s\n", danhSach[i].tenSV);
			printf ("Nganh hoc: %s\n", danhSach[i].nganh);
			printf ("Diem trung binh: %.2f\n", danhSach[i].diem);
			return 0;	
		}
		
	} printf ("Khong tim thay");
	return 0;
}
