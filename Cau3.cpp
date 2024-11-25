#include<stdio.h>

int main(){
	int sum = 0;
	int n;
	printf("Nhap vai 1 so nguyen : ");
	scanf("%d",&n);
	for(int i = 1 ; i <=n ; i++){
		sum += i;
	}
	printf("Tong cac so tu 1 den %d la %d",n,sum);
	return 0;
}
