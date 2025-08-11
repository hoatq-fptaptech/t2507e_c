#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);

	// đếm số lượng ước số cuả n
	int dem = 0;
	for(int i=1;i<=n;i++){
		if(n%i == 0){ // nếu n chia hết cho i
			dem++;
		}
	}

	if(dem == 2){ // n chỉ có 2 ước số là 1 và n
		printf("%d là số nguyên tố",n);
	}
}