#include <stdio.h>
int main () {
	int n;
	printf("Nhap N :");
	scanf("%d", &n);
	for (int i = 2; i < n; i++){
		if (n%i==0){
			printf("%d la so nguyen to", n);
			break;
		}else{
			printf("%d khong phai la so nguyen to", n);
			break;
		}
	}
}