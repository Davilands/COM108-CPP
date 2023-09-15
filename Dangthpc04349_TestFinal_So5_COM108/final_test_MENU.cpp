/*	
	DangthPC04349_COM108_Final_test

	*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
char chuanHoa(char s[50] ) {
	int n,i,j;
   n=strlen(s);
	for (i=0; i<n; i++) {
		if (s[i]==' ' && s[i+1]==' ') {
			for (j=i; j<n; j++) {
				s[j]=s[j+1];
			}  
			i--;
			n--;
		}		
	}
		if (s[0]==' ') {
			for (i=0; i<n; i++) {
				s[i]=s[i+1];
			} n--;
		} 	
	if (s[n-1]==' ') s[n-1]='\0';
	return s[50]; 
}
void cau1() {
	char chuoi[100];
printf("\nChuong trinh Chuoi ky tu!\n");
fflush(stdin);
	printf("Moi ban nhap vao chuoi ho ten: "); gets(chuoi);
	printf("\n\n\t\tChuoi vua nhap la: '%s'",chuoi);
	chuanHoa(chuoi);
	printf("\n\n\t\tChuoi khi xoa khoang trang thua la: '%s'",chuoi); 
	printf("\n\t\tChuoi sau khi in HOA la: '%s'\n",strupr(chuoi));
}
void cau2() {
	char chuoi[100];
	int n;
printf("\nChuong trinh Tinh tong!\n");
nhap:	printf("Moi ban nhap vao gia tri N: "); scanf("%d",&n); 
	if(n<=0) {
		printf("\t\tNhap vao so nguyen duong!\n");
		goto nhap; 
	} 
	printf("\n\n\t\tTong cac so chan tu 2 den %d la: ",2*n);
	int tong=0;
//	n=n*2;
	for (int i=1; i<=n; i++) {
		//if (i%2==0) 
		tong+=2*i;
	}
	printf("%d\n",tong);
}
void nhap(int a[], int n) {
	for (int i=0; i<n; i++) {
		printf("A[%d]: ",i); scanf("%d",&a[i]);
	}
}
void xuat(int a[], int n) {
	for (int i=0; i<n; i++) {
		printf("%d  ",a[i]); 
	}	
}
void giam(int a[], int n){
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++ )
		if (a[i]<a[j]) {
			int tam;
			tam=a[i];
			a[i]=a[j];
			a[j]=tam;
		}
	}	
}
int max(int a[], int n) {
	int max=a[0];
	for (int i=1; i<n; i++) {
		if (max<a[i])
			max=a[i];
	}
	return max;	
}
void binhPhuong(int a[], int n) {
	for (int i=0; i<n; i++) {
		printf("%d  ",a[i]*a[i]); 
	}	
}
float trungBinh(int a[], int n) {
	float tb;
	int d, tong;
	tong = 0;	d=0; tb=0; 
	for (int i=0; i<n; i++) {
		tong=tong+a[i];
		d++;
	}
	tb=tong/(float)d;
	return tb;
}
void cau3() {
	int a[100],n;
	float m;

nhapLai:
	printf("\nChuong trinh Mang mot chieu!\n");
	printf("Moi ban nhap vao so phan tu trong mang (N): "); scanf("%f",&m);
	if  (m<=0) {
		printf("\t\tBan can nhap so nguyen duong !\n\n");
		goto nhapLai;
	}
	if (m==(int)m) n=(int)m;
	else {
		printf("\t\tBan can nhap so nguyen duong !\n\n");
		goto nhapLai;
	}
	printf("\n\t\tXin moi nhap du lieu cho mang!\n");
		nhap(a,n);
	printf("\n\tMang ban vua nhap la: ");
		xuat(a,n);
	printf("\n\tMang sau khi sap xep giam dan la: ");
		giam(a,n);
		xuat(a,n);
	printf("\n\tGia tri lon nhat trong mang la: %d",max(a,n));
	printf("\n\nMang so nguyen sau khi binh phuong la: ");
		binhPhuong(a,n);
	printf("\n\t\tTrung binh cac phan tu trong mang la: %.2f\n",trungBinh(a,n));
}
int main() {

	int chon,chonLai;
MENU:do {	
		printf("\n\t\t	               Menu Chuong Trinh\n");
		printf("\t\t\t+---------------------------------------------------+\n");
		printf("\t\t\t|   ===== MSSV: PC04349_TEST FINAL - SO 5 =====     |\n");
		printf("\t\t\t+---------------------------------------------------+\n");
		printf("\t\t\t|    Nhap 1 : Chuyen doi chuoi                      |\n");
		printf("\t\t\t|    Nhap 2 : Tinh tong                             |\n");
		printf("\t\t\t|    Nhap 3 : Mang mot chieu                        |\n");
		printf("\t\t\t|    Nhap 0 : Thoat                                 |\n");
		printf("\t\t\t+---------------------------------------------------+\n");
		printf("Lua chon cua ban la: "); scanf("%d",&chon);
	switch (chon) {
	case 1:{
		cau1();
		break;
	}
	case 2: {
		cau2();
		break;
	}
	case 3:
		cau3();
		break;
	case 0: 
		printf("\t\t\tXIN TAM BIET!\n\n");
		return 0;
	default: 
		printf("Hay chon chuc nang tu 1 den 4!\n");	
	} 
	}while (chon<1 || chon>3); 
	do {
		printf("\n\tBan co muon tiep tuc chuong trinh khong?\nChon 4 de quay ve MENU\nChon 5 de EXIT\n");
	printf("Lua chon cua ban la: "); scanf("%d",&chonLai);
	if (chonLai==4) {
		system("cls");
		goto MENU;
	}
	else if(chonLai==5) {
		printf("\t\t\tXIN TAM BIET!\n\n");
		return 0;
	}
	else 
		printf("\tMoi nhap lai!\n");
	} while (chonLai<4 || chonLai>5);
	
return 0;	
}





