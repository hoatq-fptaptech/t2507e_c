#include <stdio.h>

int main(){

	int num;
	printf("Nhap num = \n");
	scanf("%d",&num);

	int r;
	r = num % 2;

	if(r == 0){
		// yes
		printf("Number is even\n");
	}else{
		// no
		printf("Number is odd\n");
	}

}