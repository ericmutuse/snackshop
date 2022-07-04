#include <stdio.h>
#include <stdlib.h>
void menu();
int main()


{
    printf("\tWelcome to Zetech C Snack Shop!\n");
    return 0;
}
void menu() {
    int item;
    printf("\tToday's Menu\n");
    printf("1. hamburger - ksh.50\n");
    printf("2. samosa - ksh.50\n");
    printf("3. Coffee - ksh.40\n");
    printf("Enter Item No: ");
    scanf("%d",&item);
    if(item > 0 && item <= 3) {
    if("item added to cart\n");
}
else {
        printf("invalid item\n");
        menu();
}
return item;
}
