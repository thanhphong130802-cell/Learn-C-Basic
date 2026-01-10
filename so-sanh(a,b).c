# include <stdio.h>
int main() {
	int a,b;
	printf("Nhap so a:");
	scanf("%d", &a);
	printf("Nhap so b:");
	scanf("%d", &b);
	if (a > b){
		printf("Gia tri %d lon hon %d", a, b);
	}if (a < b) {
		printf("Gia tri %d nho hon %d", a, b);
	}if (a == b) {
		printf("%d co gia tri bang %d", a ,b);
	}return 0;
}