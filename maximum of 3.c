#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    if (a>b){
        if (a>c){
            printf("%d is maximum." ,a);
        }
        else
            printf("%d is maximum." ,c);
    }
    else{
        if (b>c){
            printf("%d is maximum." ,b);
        }
        else
            printf("%d is maximum.", c);
    }

    return 0;

}
