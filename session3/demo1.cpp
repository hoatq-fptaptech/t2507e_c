#include <stdio.h>
int main(){
	int a;
	printf("Nhap a=\n" );
	scanf("%d",&a);

	int b;
	printf("Nhap b=\n" );
	scanf("%d",&b);

	if(a == 0){
		if(b==0){
			printf("Phương trình vô số nghiệm!");
		}else{
			printf("Phương trình vô nghiệm!");
		}
	}else{
		float x;
		x = -b/(float)a;
		// x = -(float)b/a;
		// x = -(float)b/(float)a;
		printf("Nghiệm của phương trình: %f",x);
	}

}