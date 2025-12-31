#include <stdio.h>

struct Product
{
    int id, quantity;
    char name[20];
    float price;
};

void storeProduct(struct Product *p)
{
    printf("Enter Product id name quantity price: ");
    scanf("%d %s %d %f",&p->id,p->name,&p->quantity,&p->price);
}

void displayProduct(struct Product p)
{
    printf("\nProduct Details:");
    printf("\nID      : %d",p.id);
    printf("\nName    : %s",p.name);
    printf("\nQuantity: %d",p.quantity);
    printf("\nPrice   : %.2f\n",p.price);
}

void storeProductArray(struct Product p[], int n)
{
    for(int i=0;i<n;i++){
        printf("\nEnter Product %d (id name quantity price): ", i+1);
        scanf("%d %s %d %f",&p[i].id,p[i].name,&p[i].quantity,&p[i].price);
    }
}

void displayProductArray(struct Product p[], int n)
{
    for(int i=0;i<n;i++)
        displayProduct(p[i]);
}

int main()
{
    struct Product p1;
    storeProduct(&p1);        
    displayProduct(p1);      

    struct Product arr[2];
    storeProductArray(arr,2);
    displayProductArray(arr,2);

    return 0;
}