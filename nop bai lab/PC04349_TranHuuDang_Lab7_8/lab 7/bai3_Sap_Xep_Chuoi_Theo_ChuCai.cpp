/*	DangthPC04349
	Nhap mon lap trinh
		Chuong trinh sap xep chuoi theo chu cai	*/
#include <stdio.h>
#include<string.h>
int main() {
	char s[20][30];
	int i,j,n,m;
	//Nhap vao so chuoi muon sap xep
	printf("Chuong trinh sap xep chuoi theo chu cai\n");
	printf("Nhap vao so chuoi: "); scanf("%d",&n);
	//Nhap cac chuoi
	for (i=0; i<n; i++) {
		fflush(stdin);
			printf("Nhap vao chuoi thu %d: ",i+1);
			gets(s[i]);
	}
	//Sap xep bang day thuat Sort
	for (i=0; i<n-1; i++) {
		for (j=i+1; j<n; j++) {
			if (strcmp(s[i],s[j])>0) {
				char t[10];
				strcpy(t,s[i]) ;
				strcpy(s[i],s[j]);
				strcpy(s[j],t);
			}	
		}
	}	
	//Xuat ket qua sau khi sap xep
	printf("Chuoi sau khi sap xep la: \n");	
		for (i=0; i<n; i++) {
			printf("\t%d:",i+1);
			puts(s[i]);
		}	
return 0;	
}
