#include <stdio.h>

void print_tab(int tab [],int n)
{   
    printf("[");
    printf(" %d ",tab[0]);
    for (int i=1;i<n;i++)
    {
        printf(", %d ",tab[i]);
    }
    printf("]\n");
}

int * somme_tab(int tab1[], int tab2[],int n)
{
    for (int i=0;i<n;i++)
    {
        tab1[i]=tab1[i]+tab2[i];
    }
}

int mylen(char s[])
{
    int res=0;
    while (s[res]!=0)
    {
        res=res+1;
    }
    return res;
}

int main()
{
    int t[]={1,2,3,4};
    int t2[]={1,2,3,4};
    //somme_tab(t,t2,4);
    //print_tab(t,4);
    char c[]="abcdefgh";
    int a= mylen(c);
    printf("%d\n",a);
    

}
