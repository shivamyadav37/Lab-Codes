#include<stdio.h>
int main()
{
    int a;
    printf("Enter number of days\n");
    scanf("%d",&a);
    printf("No. of years %d\n",a /365);
    a = a%365;
    printf("No. of weeks %d\n",a/7);
    a = a%7;
    printf("No. of Days %d\n", a);

return 0;
}
