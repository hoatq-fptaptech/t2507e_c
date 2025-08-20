void printMenu(){
	printf("Danh sách thực đơn hôm nay:\n");
	printf("1. Lòng xào dưa\n");
	printf("2. Vịt quay Bắc Kinh\n");
	printf("3. Lẩu Tứ Xuyên\n");
}

int tinhTong(int a, int b){
	int c = a + b;
	return c;
}

int tinhGiaiThua(int t){
	int gt = 1;
	for(int i=1;i<=t;i++){
		gt *= i;
	}
	return gt;
}

bool ktSoNguyenTo(int n){
	if(n<2){
		return false;
	}
	if(n==2 || n==3){
		return true;
	}
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void printArray(int ary[],int size){
	printf("Dưới đây là các giá trị của mảng:");
	for(int i=0;i<size, i++){
		printf("%d \t",ary[i]);
	}
}

void scanArray(int ary[],int size){
	for(int i=0;i<size;i++){
		printf("Nhap pt thứ %d:",i);
		scanf("%d",&ary[i]);
	}
}