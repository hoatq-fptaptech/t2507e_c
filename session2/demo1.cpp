#include <stdio.h>
 
int main(){
	
	int x;
	x = 10;
	printf("x = %d \n",x);
	x = 20;
	printf("x = %d \n",x);
	x = x + 12;
	printf("x = %d \n",x);
	x = x - 30;
	printf("x = %d \n",x);

	float pi = 3.14159;
	printf("pi = %f \n",pi);

	double db = 3.129282828;
	printf("db = %lf \n",db);

	char ch = '$';
	ch = ch + 1;
	printf("ch = %c\n",ch);
}