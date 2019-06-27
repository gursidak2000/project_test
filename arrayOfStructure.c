#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[30] ;
    float precentage ;
};
void main()
{
    int i=0;
    struct student s[3];
    //data of first student ;

    s[0].id = 6977 ;
    strcpy(s[0].name , "upinder");
    s[0].precentage = 96.66 ;

    //data of second student;

     s[1].id = 194 ;
    strcpy(s[1].name , "shivam");
    s[1].precentage = 90.66 ;

    //data of third student;

     s[2].id = 5629 ;
    strcpy(s[2].name , "prakhar verma");
    s[2].precentage = 95.86 ;

     for(i=0;i<3;printf("\n\n")){

         printf("*************************************************************************************************\n");
        printf("the record of  student no. :%d is : \n", (i+1));
        printf("name : %s \n",s[i].name);
        printf("I.D : : %d \n",s[i].name);
        printf("PRECENTAGE : %f \n",s[i].precentage);
        printf("*************************************************************************************************\n");
        i++;
                                    }

    return;
}
