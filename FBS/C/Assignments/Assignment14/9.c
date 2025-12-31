#include <stdio.h>

struct Complex
{
    float real, imaginary;
};

void storeComplex(struct Complex *c)
{
    printf("Enter real imaginary: ");
    scanf("%f %f",&c->real,&c->imaginary);
}

void displayComplex(struct Complex c)
{
    printf("\nComplex Number: %.2f + %.2fi\n",c.real,c.imaginary);
}

void storeComplexArray(struct Complex c[], int n)
{
    for(int i=0;i<n;i++){
        printf("\nEnter Complex %d (real imaginary): ", i+1);
        scanf("%f %f",&c[i].real,&c[i].imaginary);
    }
}

void displayComplexArray(struct Complex c[], int n)
{
    for(int i=0;i<n;i++)
        displayComplex(c[i]);
}

int main()
{
    struct Complex c1;
    storeComplex(&c1);       
    displayComplex(c1);     

    struct Complex arr[2];
    storeComplexArray(arr,2);  
    displayComplexArray(arr,2);

    return 0;
}