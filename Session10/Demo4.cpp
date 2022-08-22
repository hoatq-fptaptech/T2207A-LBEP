#include <stdio.h>
typedef struct SinhVien{
	char masv[50];
	char tensv[100];
	int dt;
}SV;

typedef struct book{
	char tensach[50];
	float giaban;
}Book; 
int main(){
	struct SinhVien hoang;
	struct SinhVien cuong;
	
	printf("Nhap ten sinh vien hoang:\n");
	scanf("%s",hoang.tensv);
	printf("nhap diem thi sinh vien hoang:");
	scanf("%d",&hoang.dt);
	printf("Nhap ma sinh vien hoang:\n");
	scanf("%s",hoang.masv);
	
	SV trung;
	Book ngk;
	
	SV T2207A[26];
	
	SV *T2207E;
}
