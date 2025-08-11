#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);

	int tongUoc = 0;

	for(int i=1;i<n;i++){
		if(n%i == 0){
			tongUoc += i;
		}
	}
	if(n==tongUoc){
		printf("%d là số hoàn hảo",n);
	}else{
		printf("%d không phải số hoàn hảo",n);
	}
}