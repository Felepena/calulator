#include <stdio.h>

int main(void) {
    int a;
    int b;
    char c;

    printf("Please enter a number between 1 and 10: ");
    scanf("%d", &a);
    printf("Please enter a number between 1 and 10: ");
    scanf("%d", &b);
printf("Please enter a charakter: ");
    scanf(" %c", &c);

    switch (c) {
        case '+':printf("%d",a+b );break;
        case '-':printf("%d",a-b );break;
        case '*':printf("%d",a*b);break;
        case '/':printf("%d",a/b);break;
        default: fprintf(stderr , "Error neni znamenko");
    }
}
