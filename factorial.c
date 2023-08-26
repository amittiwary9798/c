#include<stdio.h>
int fact(int n);
int main()
{
    int n,res;
    printf("enter n");
    scanf("%d",&n);
    res=fact(n);
    printf("the factorial of number is %d",res);
    return 0;

}
int fact(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return n*fact(n-1);
}
