#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,op;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("which operation do you want to perfrom\n 1.addition\n 2. subtraction\n 3. division\n 4. multiplication\n");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        printf("addition of two numbers are: %d",a+b);
        break;
    case 2:
        printf("subtraction of two numbers are:%d",a-b);
        break;
    case 3:
    if (b != 0)
    {
        printf("division of two numbers are:%d",a/b);
    }
    else
    {
        printf("any number division by 0 is not possible");
    }
    
        break;
    case 4:
        printf("multiplication of two numbers are:%d",a*b);
        break;
    default:
        break;
    }
    return 0;
}
