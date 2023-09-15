/*	DangthPC04349
	Nhap mon lap trinh
		Chuong trinh dem so nguyen am va phu am	*/
#include <stdio.h>
#include<string.h>
int main() {
	char s[100];
	int i,p,d;
	//INP: Nhap vao chuoi 
	printf("Chuong trinh dem so nguyen am va phu am trong chuoi\n");
	printf("Nhap vao chuoi muon xet: "); gets(s);
	strlwr(s);
	i=0;
	d=0;
	p=0;
	while (s[i]!='\0') {
		//tien hanh dem Nguyen Am
		if (s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
			d++;
		//Nguoc lai dem Phu Am	
		else {	
			// La ky tu Chu Cai thi dem Phu Am
			if(s[i]>='a' && s[i]<='z') p++;	
		}
		i++;		
	}
	//OUT: Xuat ket qua
	printf("Xau '%s' co %d nguyen am va %d phu am!",s,d,p);
return 0;	
}
