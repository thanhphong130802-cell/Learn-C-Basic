#include <stdio.h>
#include <math.h>
main(){
	int n,m;
	int arr[60][60];
	int temp[10][20];
	do{
		printf("\n So dong:"); scanf("%d", &n);
	}while(n<0||n>60);
	do{
		printf("\n So cot:"); scanf("%d", &m);
	}while(m<0||m>60);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("\n arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n Ma tran \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d \t",arr[i][j]);
		}
		printf("\n");
	}
	int tong=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			tong+=arr[i][j];
	printf("\n Tong=%d",tong);
	int dong;
	do{
		printf("\n dong:"); scanf("%d",&dong);
	}while(dong<0||dong>=n);
	tong=0;
	for(int j=0;j<m;j++)
		tong+=arr[dong][j];
	printf("\n tong tren dong %d bang %d",dong,tong);
	tong=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if(i==j)
				tong+=arr[i][j];
	printf("\n Tong gia tri tren duong cheo chinh:%d",tong);
}