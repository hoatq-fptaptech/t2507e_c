#include <stdio.h>
#include "demo.h"

int main(){
	printMenu();

	int x;
	x = tinhTong(5,9); // x = 5 + 9
	x = tinhTong(x,25);

	int y = 12;
	int kq = tinhGiaiThua(y);

	if(ktSoNguyenTo(x)){
		printf("%d là số nguyên tố",x);
	}else{
		printf("%d ko phải số nguyên tố",x);
	}

	int arr[5] = {1,3,5,2,4};

	printArray(arr,5);
	scanArray(arr,5);
	printArray(arr,5);
}