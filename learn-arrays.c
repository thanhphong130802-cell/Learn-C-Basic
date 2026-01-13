# include <stdio.h>
int main(){
	int n;
	long sum = 0;
	printf("Nhap so luong phan tu:");
	scanf("%d", &n);
	int mang[n];
	for (int i = 0; i < n; i++){
	printf("Nhap cac so nguyen:");
	scanf("%d", &mang[i]);
	}
	printf("Mang vua nhap:");
	for (int i = 0; i < n; i++){
		printf("%d\t", mang[i]);
	}
	printf("Tong cac gia tri da nhap:");
	for (int i = 0; i < n; i++){
		sum += mang[i];
	}	printf("%ld", sum);
}