#include<stdio.h>
int main()
{
    int a,b;
    char oprtr;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter an operator: ");
    scanf("\n%c",&oprtr);
    switch(oprtr){
    case '-':
        printf("Enter second number: ");
    scanf("%d",&b);
        printf("%d",a-b);
        break;
    case '+':
        printf("Enter second number: ");
    scanf("%d",&b);
        printf("%d",a+b);
        break;
    case '/':
        printf("Enter second number: ");
    scanf("%d",&b);
        printf("%d",a/b);
        break;
    case '*':
        printf("Enter second number: ");
    scanf("%d",&b);
        printf("%d",a*b);
        break;
    default:
        printf("invalid operator");
        break;







    }





    return(0);

}
