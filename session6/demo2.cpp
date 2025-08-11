#include <stdio.h>

int main(){

	int i=10;
	while(i<10){
		i++;
		printf("While....\n");
	}

	do{
		printf("Do while...\n");
		i++;
	}while(i<10);

	// nhập 3 số nguyên dương, kiểm tra xem có 3 canh tam giac
	int a,b,c;
	// printf("Nhap so a=");
	// scanf("%d",&a); 
	// printf("Nhap so b=");
	// scanf("%d",&b);
	// printf("Nhap so c=");
	// scanf("%d",&c);
	// while(a<=0 || b <=0 || c<=0){
	// 	printf("Nhap so a=");
	// 	scanf("%d",&a); 
	// 	printf("Nhap so b=");
	// 	scanf("%d",&b);
	// 	printf("Nhap so c=");
	// 	scanf("%d",&c);
	// }

	do{
		printf("Nhap so a=");
		scanf("%d",&a); 
		printf("Nhap so b=");
		scanf("%d",&b);
		printf("Nhap so c=");
		scanf("%d",&c);
	}while(a<=0 || b <=0 || c<=0); // validate input

}