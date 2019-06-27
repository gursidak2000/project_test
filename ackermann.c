#include<stdio.h>
int a(int m , int n){

    if(m==0)
        return(n+1);
    if(m>0 && n==0)
        return ( a(m-1,1) );
    if(m>0 && n>0)
        return( a(m-1 , a(m , n-1)) );
}


void main()
{
    int m , s , n;

    printf("enter the value of first number  \n");
    scanf("%d",&m);

    printf("enter the value of second number \n");
    scanf("%d",&n);

    printf("%d",a(m,n));
    return;
}
