int binhPhuong(int a){
	int b= a*a;
	return b;
}
int tinhTong(int a,int b){
	int c  = a+b;
	return c;
}
int soLonHonTrong2So(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}

int timMax(int n, int arr[]){
	int high = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i] > high){
			high = arr[i];
		}
	}
	return high;
}
float tbcMang(int arr[],int n){
	float S = 0;
	for(int i=0;i<n;i++){
		S += arr[i];
	}
	float tbc = S/n;
	return tbc;
}
void thucDonHomNay(){
	printf("1. Pho bo\n");
	printf("2. Bun bo hue\n");
	printf("3. Pho ga\n");
}
bool ktSoDuong(int a){
	if(a > 0){
		return true;
	}else{
		return false;
	}
}
