#include<stdio.h>

struct student
{
    int id;
    char name[30] ;
    float precentage ;
};
void main()
{
    int i=0 , n=0 ;
    struct student s[3];

    printf("Enter the number of students of which u have to maintain records \n");
    scanf("%d",&n);

    for(i=0;i<n;i++){

         printf("ENTER THE DETAILS OF STUDENT NO. : %d\n\n", (i+1));

         printf("NAME:");
         fgets("%s",s[0].name);
         printf("\nID :");
         scanf("%f",&s[i].id);

         printf("\nprecentage: ");
         scanf("%f",&s[i].precentage);
         printf("\n");
         }

}
