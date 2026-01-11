# include <stdio.h>
int main(){
	char name[30];
	float es;
	printf("Name: ");
	scanf("%s", name);
	printf("Exam score: ");
	scanf("%f", &es);
	if (es >= 8){
		printf("%s\nAchieved level A", name);
	}
	else if (es>=6.5){
		printf("%s\nAchieved level B", name);
	}
	else if (es >= 5){
	
			printf("%s\nAchieved level C", name);
	}
	else {
			printf("%s\nAchieved level D", name);
	}
}
