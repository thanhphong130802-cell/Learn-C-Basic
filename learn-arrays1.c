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
		int i, j, temp;
	for (i = 0; i < a - 1; i++){
		for (j = 0;j < a - i - 1; j++){
			if ( ar[j] > ar[j+1]){
				temp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] = temp;
			}
		}
	}
	printf("Mang sau khi sap xep tang dan: \n");
	for(i = 0; i < a; i++){
		printf("%d\t", ar[i]);
	}
	return 0;
}