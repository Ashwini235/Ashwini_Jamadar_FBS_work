#include <stdio.h>

struct book
{
    int id;
    char bname[50];
    char author[50];
    float price;
};

int main()
{
    struct book b;


    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b.bname);   

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);

    printf("Enter Book Price: ");
    scanf("%f", &b.price);

    
    printf("\n--- Book Details ---\n");
    printf("Book ID    : %d\n", b.id);
    printf("Book Name  : %s\n", b.bname);
    printf("Author     : %s\n", b.author);
    printf("Price      : %.2f\n", b.price);

    return 0;
}