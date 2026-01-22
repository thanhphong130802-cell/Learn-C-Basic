# include <stdio.h>
int main() {
	printf("Maths =");
	int m, p, c;
	scanf("%d", &m);
	printf("Physics =");
	scanf("%d", &p);
	printf("Chemistry =");
	scanf("%d", &c);
	float as =(float) (m + p + c)/3.0;
	printf("Average score = %.3f", as);
}int a;