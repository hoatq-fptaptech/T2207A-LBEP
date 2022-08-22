#include <stdio.h>
#include <string.h>
int main(){
	char s1[100];
	char s2[100];
	printf("NHap chuoi 1:\n");
	scanf("%s",s1); // hoa
	printf("Nhap chuoi 2:\n");
	scanf("%s",s2); // mai
	printf("Chuoi vua nhap 1: %s\n",s1); // hoa
	printf("Chuoi vua nhap 2: %s\n",s2); // mai
	
	strcat(s1,s2); // s1 = s1 + s2;
	printf("Chuoi vua nhap 1: %s\n",s1); // hoamai
	printf("Chuoi vua nhap 2: %s\n",s2); // mai
	
	strcat(s2,s1); // s2 = s2 + s1 mai + hoamai
	printf("Chuoi vua nhap 1: %s\n",s1); //  hoamai
	printf("Chuoi vua nhap 2: %s\n",s2); // maihoamai
	
	if(strcmp(s1,s2) < 0){
		printf("AAAA \n");
	}else{
		printf("BBBB \n");
	}
	
	int v = strchr(s1,'h') - s1;// tim duoc dia chi cua ky tu h roi tru di mang
	strcpy(s1,s2); // s1 = s2;// maihoamai
	strcpy(s2,s1);// s2 = s1;
	if(strcmp(s1,s2) < 0){
		printf("CCCC \n");
	}else{
		printf("DDDD \n");
	}
	int d = strlen(s1);
	printf("Do dai chuoi 1: %d\n",d);
}
