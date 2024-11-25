#include<stdio.h>

int main(){
	int a , b;
	printf("Nhap 2 so nguyen duong a va b : ");
	scanf("%d %d",&a,&b);
	if(a < 0 || b < 0){
		printf("Vui long nhap so nguyen duong \n");
		return 1;
	}
	int gcp = 1; 
	int min = (a < b) ? a : b;
	for(int i = 1 ; i <= min ; i++){
		if(a % i == 0 && b % i == 0){
			gcp = i;
		}
	}
	printf("UCLN cua a va b la : %d",gcp);
	return 0;
}
