#include <conio.h>
#include <stdio.h>
#include <string.h>
char chuanHoa(char s[50] ) {
	int n,i,j;
 strlwr(s);
   
   n=strlen(s);
	//xoa_1KT khi co 2KT lien ke
	for (i=0; i<n; i++) {
		if (s[i]==' ' && s[i+1]==' ') {
			for (j=i; j<n; j++) {
				s[j]=s[j+1];
			}  
			i--;
			n--;
		}		
	}
	//xoa phu am thua
	for (i=0; i<n; i++) {
		if (s[i]=='u'&&s[i+1]=='u'&&s[i+2]!='u')
			i++;
		if (s[i]==s[i+1]) {
			for (j=i; j<n; j++) {
				s[j]=s[j+1];
			}  
			i--;
			n--;
		}		
	}
	//xoa KT dau tien trong chuoi
		if (s[0]==' ') {
			for (i=0; i<n; i++) {
				s[i]=s[i+1];
			} n--;
		} 
	//xoa KT cuoi cung trong chuoi		
	if (s[n-1]==' ') s[n-1]='\0';
	
	//chuan hoa hoa ten (viet hoa ky tu dau)
	s[0]=s[0]-32;
	for (int i=0; i<strlen(s); i++)
		if (s[i]==' ') {
			s[i+1]=s[i+1]-32;
	    }
	return s[50]; 
}
main(){
	
  char s[200];  
  int i,ho,ten,d; 
  fflush(stdin);
  printf("Nhap vao ho ten muon chuan hoa : ");	gets(s);
  printf("Chuoi truoc khi chuan hoa la: '%s'\n",s);
  chuanHoa(s);
	//printf("Ho ban co may tu: "); scanf("%d",&ho);
	//Xuat ho
	ho=1;
	printf("Ho ban la: ");
	i=0; d=0;
	while (d!=ho) {
		printf("%c",s[i]);
		if (s[i]==' ') d++;
		i++;
	}	
	printf("\n");
	
	//Xuat ten
	d=0;
	for (i=strlen(s); i>0; i--) {
		if (s[i]!=' ') d++;
		if (s[i]==' ') break;
	}
	printf("Ten cua ban la: ");
	//ten=(strlen(s)-d)+1;
	//printf("\n %d, %d",d,ten);
	/*
	VD: Tran Le Huu Dang
							d = 4
							length = 16
							ten= (16 - 4) + 1 = 13
	*/
	for (ten=(strlen(s)-d)+1; ten<=strlen(s); ten++) {
		printf("%c",s[ten]);
	}
		
	printf("\nChuoi sau khi chuan hoa la: '%s'",s);	
  
}
