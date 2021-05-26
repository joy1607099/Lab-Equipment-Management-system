#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"structure.h"
#include"insert-file.h"
#include"abc.h"





int main()
{
    system("COLOR 1F");
    char ch;

    printf("\n \n\n\t\t\t***HELLO*** \n");
    printf("\tWELCOME TO CSE LAB EQUIPMENT MANAGEMENT SYSTEM\n");
    printf("\n\t\tLIST OF ACTIVITES\n\n");
    printf("1.add new lab instrument\n2.search lab instrument information\n3.update lab instrument information\n4.Delete lab instrument information\n");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='1')
    {
        system("cls");
        insert1();

    }

    else if(ch=='2')
    {
        system("cls");
        show();
    }
    else if(ch=='3')
    {
        return 0;

    }
    else if(ch=='4')
    {
         return 0;

    }
    else
    {
        printf("invalid command\n");

    }





return 0;




}
