#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>

bool prime(int N)
{
    if(N<2) return false;
    if(N==2) return true;
    if(N%2==0) return false ;
    for(int i=3;(long long int )i*i<=N;i+=2)
    {
        if(N%i==0) return false;
    }
    return true;
}

int main()
{
    for(int i=10;i<=30;i++)
    {
        if(prime(i)) printf("%d ",i);
    }
    printf("\n");

}
