#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>

const int N=100000;

int main()
{
    int prime[N];
    for(int i=0;i<N;i++) prime[i]=1;

    prime[0]=0;
    prime[1]=0;

    for(int i=2;(long long int)i*i<=N;i++)
    {
       if(prime[i]==1)
       {
           for(int j=i*i;j<N;j+=i)
           {
               prime[j]=0;
           }
       }
    }

    for(int i=10;i<=30;i++)
    {
        if(prime[i]==1) printf("%d ",i);
    }

}

