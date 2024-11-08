#include <stdio.h>
#include <string.h>

struct Cars{
	char Make[30];
	char Model[30];
	int Year;
	float Price, Milege;
};

int main(){
	int N;
	int Choice = 0;
	struct Cars Info;
	while (Choice == 0){
		printf("Enter how many cars you want to add: ");
		scanf("%d", &N);
		for(int i = 0; i < N; i++){
			printf("Enter Car Make: ");
			fgets(Info.Make, 30, stdin);
			Info.Make[strcspn(Info.Make, "\n")] = '\0';
			printf("Enter Car Model: ");
			fgets(Info.Model, 30, stdin);
			Info.Model[strcspn(Info.Model, "\n")] = '\0';
			printf("Enter Car Year: ");
			scanf("%d", Info.Year);
			printf("Enter Car Price: ");
			scanf("%d", Info.Price);
			printf("Enter Car Milege: ");
			scanf("%d", Info.Milege);
		}
	}
	return 0;
}
