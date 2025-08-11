#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap số nguyên dương n=\n");
		scanf("%d",&n);
	}while(n<=0);

	if(n==0){
		printf("Số cần tìm: 0");
	}else if(n==1){
		printf("Số cần tìm: 1");
	}else if(n==2){
		printf("Số cần tìm: 1");
	}else{
		// n>=3
		int f1 = 0, f2 = 1, fn = 1;
		for(int i=3;i<=n;i++){
			f1 = f2;
			f2= fn;
			fn = f1 + f2;
		}
		printf("Số cần tìm: %d",fn);
	}

    
    


}