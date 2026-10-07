#include<stdio.h>

int main()
{
    for(int i=10;i<=30;i++)
    {
        int flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if(flag==0) printf("%d ",i);
    }
    printf("\n");
}
