#include <stdio.h>

int main(){
	int tk = 4000, y=0;

	while(y<3){ // phải làm sao có thời điểm bị sai
		// yes
		tk = tk + tk*8/100;
		y++;
	}
	// no
	printf("Sau 3 năm: %d\n",tk);
}