#include<stdio.h>
int main()
{
int n;
n=f(9);
printf("%d",n);


}
f(int x)
{
    if (x==5)

    {
    return x;
    }
    else 
    {
        printf("-")/* code */;
        f(x-1);
    }

    
    
}