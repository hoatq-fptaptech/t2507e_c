#include <stdio.h>

int main(){
	// int i = 0;
	// while(i<10){
	// 	printf("i= %d\n",i);
	// 	i++;
	// }

	// while(i<10){
	// 	printf("i= %d\n",i);
	// 	i++;
	// }

	for(int i=0;i<10;i++){
		printf("i= %d\n",i);
	}

	for(int i=0;i<10;i++){
		printf("i= %d\n",i);
	}

	for(int i=0,j=0,k=0; i<10 || j<10 ; i+=, j++,k++ ){
		printf("i j k...\n");
	}

	int n = 0;

	for(  ; n<2 ;  ){
		printf("n=%d\n",n);
		n++;
	}

	int dn = 0;
	for( ;n !=0 ; n/=10 ){
		dn = dn * 10 + n%10;
	}
	// int S=0;
	// for(int i=1;i<=n;S+=i,i++);
	
	
}