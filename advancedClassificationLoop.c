#include "numClass.h"

int isDigit(int);
int firstDigit(int);
int power(int,int);

/*int isPalindrome(int x)
{
    int temp1=x;
    int count=0;
    int numOfzeros=1;//checks the size of the first digit, for example fot the number 18734, numOfZeros=10000
    while(temp1>0)//num of digits
    {
        temp1=temp1/10;
        count++;
    }
    while(!isDigit(x))
    {
        if(!(x%10==firstDigit(x)))
            return 0;
        for(int i=0;i<count;i++)
            numOfzeros=numOfzeros*10;

        x=x-numOfzeros*firstDigit(x);
        count--;
    }

    return 1;
}*/

int isPalindrome(int x)
{
    int temp=x,reverse=0;
    while(temp>0)
    {
        reverse=reverse*10+temp%10;
        temp=temp/10;
    }
    if(reverse==x)
        return 1;
    return 0;    
}

int isArmstrong(int x)
{
 int temp1=x,temp2=x;
    int sum=0,count=0;
    while(temp1!=0)//num of digits
    {
        temp1=temp1/10;
        count++;
    }

    while(temp2!=0)
    {
        sum=sum+power(temp2%10,count);
        temp2=temp2/10;
    }

    if(sum==x)
        return 1;
    return 0;    
}

int isDigit(int x)
{
    if(x>=0 && x<10)
        return 1;
    return 0;    
}

int firstDigit(int x)
{
    int temp=x;
    while(temp>=10)
    {
        temp=temp/10;
    }
    return temp;
}

int power(int num,int pow)
{
    int sum=1;
    while(pow>0)
    {
        sum=sum*num;
        pow--;
    }
    return sum;
}