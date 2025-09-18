#include <stdio.h>
#include <stdlib.h>

int main()
{
    char item[50] = " ";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy? : ");
    fgets(item , sizeof(item),stdin);

    printf("what is the price of each? :");
    scanf("%f",&price);

    printf("How many would you like? : ");
    scanf("%d",&quantity);

    total =  price * quantity;

    printf("\n You have bought %d  %s\n",quantity,item);
    printf(" Total is : %c%0.2f",currency,total);


    return 0;
}
