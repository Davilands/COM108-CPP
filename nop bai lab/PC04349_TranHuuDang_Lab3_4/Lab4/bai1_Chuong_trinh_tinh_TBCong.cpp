#include<stdio.h>	//Tran Huu Dang MSSV: Pc04349
					//chuong trinh tinh TB tong tu min toi max
int main(){
	int min, max,i ;
	float tong , bienDem , trungBinh ;
	printf("chuong trinh tinh TB tong tu min toi max\n");
	printf("Nhap vao gia tri min va max: ");
	scanf("%d %d",&min,&max);
	tong=0;
	bienDem=0;
	trungBinh=0;
	i=min;
	while( i<= max) {
		if(i%2==0){
			tong+=i;
			bienDem++;			
		}
		i++;
	}
	trungBinh=tong/bienDem;
	printf("Gia tri trung binh tu %d den %d la: %.2f",min,max,trungBinh);
	getchar ();
	return 0;
}
