#include<stdio.h>

int main(){
	int min, max,i ;
	
	float tong , bienDem , trungBinh ;
	printf("Nhap vao gia tri min va max: ");
	scanf("%d %d",&min,&max);
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
