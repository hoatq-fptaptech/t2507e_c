#include <stdio.h>

int main(){
	int tk = 4000, y=0;

	while(tk<1000000){ // phải làm sao có thời điểm bị sai
		// yes
		tk = tk + tk*8/100;
		y++;
	}
	// no
	printf("Số năm: %d\n",y);
}