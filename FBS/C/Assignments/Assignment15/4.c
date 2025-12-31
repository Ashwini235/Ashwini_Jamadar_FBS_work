#include <stdio.h>

struct product
{
    char name[50];
    float price;
    int quantity;
};

int main()
{
    struct product cart[10];
    int i, n;
    float total = 0;

    printf("Enter number of items to add to cart: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of item %d\n", i + 1);

        printf("Product Name: ");
        scanf(" %[^\n]", cart[i].name);

        printf("Price: ");
        scanf("%f", &cart[i].price);

        printf("Quantity: ");
        scanf("%d", &cart[i].quantity);

        total = total + (cart[i].price * cart[i].quantity);
    }

    
    printf("\n--- Cart Details ---\n");
    for (i = 0; i < n; i++)
    {
        printf("\nItem %d\n", i + 1);
        printf("Name     : %s\n", cart[i].name);
        printf("Price    : %.2f\n", cart[i].price);
        printf("Quantity : %d\n", cart[i].quantity);
        printf("Cost     : %.2f\n", cart[i].price * cart[i].quantity);
    }

    printf("\nTotal Bill Amount = %.2f\n", total);

    return 0;
}