#include<stdio.h>
int main()
{
    printf("Enter the number ");
    int n;
    scanf("%d",&n);
    int num=n;
    int temp=0;
    while(n>0)
    {
        temp=temp*10+n%10;
        n=n/10;
    }
    if (temp==num)
        printf("Given number is palindrom");
    else
        printf("Not palindrom");
}
