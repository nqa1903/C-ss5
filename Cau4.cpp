#include<stdio.h>

int main(){
	int n;
	printf("Nhap 1 so nguyen tu 1 - 10 : ");
	scanf("%d",&n);
	for(int i = 1 ; i <=n ; i++){
		printf("%d * %d = %d \n",i,n,i*n);
	}
	return 0;
}
