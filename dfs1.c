#include<stdio.h>

typedef struct 
{
	
	char title[50];
	int page;
	float price;

}Book;

int main()
{

Book b[3];
int i;

for (i = 0; i < 3; i++)
{
printf("\nInput the book details :\n");

printf("\nEnter the Title :");
scanf("%s", b[i].title);

printf("\nEnter the number of pages : ");
scanf("%d", &b[i].page);

printf("\nEnter the price : ");
scanf("%f", &b[i].price);
}

for (i = 0; i < 3; i++)
{
printf("\nTitle of the book : %s", b[i].title);

printf("\nNumber of pages : %d", b[i].page);

printf("\nPrice of the book : %f\n", b[i].price);
}
printf("\n*************END***************\n");
return 0;

}