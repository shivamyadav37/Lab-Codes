//Program to Print Reverse of an Entered Number.
//Author--> Shivam sYadav
#include<stdio.h>
int main()
{
    int num,temp;
    printf("Enter the Number\n");
    scanf("%d",&num);
    printf("The Reversed Number is:");

    while(num!=0)
    {
        temp=num%10;
        printf("%d",temp);
        num=num/10;

    }
return 0;
}
