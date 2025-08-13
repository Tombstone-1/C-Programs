//create a structure book whose data memebers are book_id, book_name, price,author. 
//display the information of book.

#include<stdio.h>

struct book {
	int book_id;
	char book_name[20],author[20];
	float price;
};

int main() {
	struct book b1={101,"Power of C","Daniel",743.88};
	
	printf("book id is %d", b1.book_id);
	printf("\nbook name is %c", b1.book_name);
	printf("\nbook author is %c",b1.author);
	printf("\nbook price is %.2f",b1.price);
}