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
	if (a > 0){
	float Tb = (float)sum/a;	
	printf("\nTb: %.2f", Tb);
	                                                                                                                 }
	int max = ar[0];
	for (int i = 0; i < a; i++){
		if (max < ar[i]) {
			max = ar[i];
		}
	}
		printf("\nMax: %d", max);
	for (int i = 0; i < a - 1; i++){
		for (int j = 0;j < a - i - 1; j++){
			if ( ar[j] > ar[j+1]){
				int temp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] = temp;
			}
		}
	}
	printf("\nMang sau khi sap xep tang dan: ");
	for(int i = 0; i < a; i++){
		printf("%d\t", ar[i]);
	}
	printf("\nCac so nguyen to trong mang la: ");
	for (int i = 0; i < a;i++){
		if (ar[i] < 2) continue;
		int isPrime = 1;
		for(int j = 2; j * j <= ar[i]; j++){
			if (ar[i] % j ==0){
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1){
			printf("%d\t", ar[i]);
		}
	}
	
	return 0;
}