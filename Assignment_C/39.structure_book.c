#include<stdio.h>

struct book {
	char book_name[20],author_name[20];
	float price;
	
};

int main() {
	struct book s1;
	
	printf("\nEnter book name = ");
	scanf("%s", &s1.book_name);
	
	printf("\nEnter author name = ");
	scanf("%s", &s1.author_name);
	
	printf("\nEnter price = ");
	scanf("%f",&s1.price);
	
	printf("\nbook name = %s", s1.book_name);
	printf("\nauthor name = %s", s1.author_name);
	printf("\nprice = %.2f", s1.price);
}