# include <stdio.h>
int main(){
	int yob;
	int y = 2025;
	printf("Year of birth: ");
	scanf("%d", &yob);
	int age = y - yob ;
	printf("Age = %d", age);
}