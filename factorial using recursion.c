#include<stdio.h>
int factorial(int n ){

    if(n>=1)
        return ( n * factorial(n-1));
    else
        return 1;

}


void main()
{
    int n ;

    printf("enter the no.");
    scanf("%d",&n);

   printf("fact of number is %d ",factorial(n));

    return;
}
