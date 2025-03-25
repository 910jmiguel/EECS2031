#include <stdio.h>

typedef struct {
    char name[20];
    char email[25];
}Customer;

typedef struct{
    Customer buyer;
    char item[20];
    int amount;
}Record;

int main(){
    Record mysale = {{ "Acme Industries", "acme@outlook.com"},
                "laptops", 150};
    printf(" Buyer Name: %s\n",mysale.buyer.name);
    printf(" Buyer Email id: %s\n",mysale.buyer.email);
    printf(" Item Name: %s\n",mysale.item);
    printf(" Item Amount: %d\n",mysale.amount);
}