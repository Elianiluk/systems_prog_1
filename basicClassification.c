#include "NumClass.h"

int factorial(int);

int isPrime(int x)
{
    int i;
    for(i=2;i<x-1;i++)
    {
        if((x%i)==0)
            return 0;
    }
    return 1;
    
}

int isStrong(int x)
{
    int temp=x;
    int sum=0;
    while(temp>0)
    {
        sum=sum+factorial(temp%10);
        temp=temp/10;
    }

    if(sum==x)
        return 1;
    return 0;    

}

int factorial(int x)
{
    int sum=1;
    for(int i=1;i<=x;i++)
    {
        sum=sum*i;
    }

    return sum;
}
