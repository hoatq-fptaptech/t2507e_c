#include <stdio.h>

int main(){
	int d,m,y,ct;
	printf("Nhập ngày:\n");
	scanf("%d",&d);
	printf("Nhập tháng:\n");
	scanf("%d",&m);
	printf("Nhập năm:\n");
	scanf("%d",&y);

	// tìm xem tháng vùaw nhập vào
	// ngày cuối tháng là ngày bao nhiêu
	if(m==2){
		if(y%400==0 || (y%4==0 && y%100 != 0)){
			ct = 29;
		}else{
			ct = 28;
		}
	}else{
		if(m == 4 || m == 6 || m==9 || m==11){
			ct = 30;
		}else{
			ct = 31;
		}
	}

	// tìm ngày kế tiếp
	if(d == ct){
		d = 1;
		if(m==12){
			m =1;
			y++;
		}else{
			m++;
		}
	}else{
		d++;
	}
	printf("Ngày kế tiếp: %d/%d/%d",d,m,y);
}