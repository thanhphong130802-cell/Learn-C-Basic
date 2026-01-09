# include <stdio.h>
int main(){
	float r;
	printf("Radius =");
	scanf("%f", &r);
	float c = r*2*3.14159;
	printf("C =%.5f\n", c);
	float s = r*r*3.14159;
	printf("S =%.5f\n =", s);
	return 0;
}