# include <stdio.h>
int main(){
	int a;
	printf("Nhap so luong phan tu:");
	scanf("%d", &a);
	int ar[a];
	printf("Nhap cac phan tu:");
	for (int i = 0; i < a; i++){
		scanf("%d", &ar[i]);
	}
	printf("Cac phan tu da nhap la: ");
	for (int i = 0;i < a; i++){
		printf("%d, ", ar[i]);
	}
	int sum = 0;
	printf("\nSum: ");
	for (int i = 0; i < a; i++){
		sum += ar[i];
	}
	printf("%d", sum);
	float Tb = (float)sum/a;
	printf("\nTb: %.2f", Tb);
	int max = ar[0];
	for (int i = 0; i < a; i++){
		if (max < ar[i]) {
			max = ar[i];
		}
	}	
		printf("\nMax: %d", max);
	return 0;
}