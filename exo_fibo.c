#include <stdio.h>
int fibo(int n)
{
    if (n==1)
    {
        return 0;
    }
    if (n==2)
    {
        return 1;
    }
    else 
    {
        int n1=0;
        int n2=1;
        int n1_med=0;
        for (int i=2;i<n;i++)
        {
            n1_med=n1;
            n1=n2;
            n2=n2+n1_med;
        }
        return n2;
    }
}


int main()
{
    printf("%d\n",fibo(6));
}

