/*
Exp 8 Task 1
Title:WAP to find the length of a string without using library function.
Name:Sajid
Class:First Year
Div:C
Roll no.:58
UIN:241P064
*/

#include <stdio.h>
int main()
{
    char str[100];
    int i,length=0;

    printf("Enter a string: \n");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++)
    {
        length++;
    }

    printf("Length of input string: %d",length);
     return 0;
}

OUTPUT :
Enter a string:
BEATBOX
Length of input string: 7
Process returned 0 (0x0)   execution time : 14.250 s
Press any key to continue.