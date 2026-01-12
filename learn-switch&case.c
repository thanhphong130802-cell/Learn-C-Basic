# include <stdio.h>
int main() {
	int luachon;
	printf("Lua chon\n");
	printf("1. Tinh dien tinh hinh vuong\n");
	printf("2. Tinh dien tich hinh chu nhat\n");
	scanf("%d", &luachon);
	switch(luachon) {
		case 1: {
			float a;
			printf("Nhap chieu dai canh: ");
			scanf("%f", &a);
			printf("Dien tich:\n%.2f * %.2f= %.2f", a, a, a*a);
				break;
		}
		case 2: {
			float a, b;
			printf("Nhap chieu dai: ");
			scanf("%f", &a);
			printf("Nhap chieu rong: ");
			scanf("%f", &b);
			printf("Dien tich:\n%.2f * %.2f= %.2f",a ,b, a*b);
				break;
		}
		default:
			printf("Loi: Lua chon %d khong ton tai trong danh sach!\n", luachon);
			break;
	}
	return 0;
}