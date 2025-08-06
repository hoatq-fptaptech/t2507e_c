#include <stdio.h>

int main(){
	int x = 10;

	if(x >= 10){
		printf("A\n");
	}else if(x >= 5){
		printf("B\n");
	}else if(x >= 15){
		printf("C\n");
	}else{
		printf("D\n");
	}
		
	switch(x){
		case 5: printf("A");break;
		case 10: printf("B");break;
		case 15: printf("c");break;
		default: printf("D");
	}
		
	if(x == 5){

	}else if(x==10){

	}else if(x==15){

	}else{

	}

	if(x > 5){
		if(x > 10){
			printf("X");
		}else{
			printf("Z");
		}
	}else{
		printf("Y");
	}

	switch(x>5){
	case true: {
		switch(x > 10){
		case true: printf("X");break;
		default: printf("Z");

		}
	}
	// case false: printf("Y");break;
	default: printf("Y");
	}

}