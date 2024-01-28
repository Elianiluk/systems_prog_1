#include "NumClass.h"

int isPalindromeHelp(int,int);
int isArmstrongHelp(int,int,int);
int power(int,int);

int isPalindrome(int x)
{
    int temp=x;
    int reverse=0;
    int num=isPalindromeHelp(temp,reverse);
    if(num==x)
        return 1;
    return 0; 
}

int isArmstrong(int x)
{
    int temp=x;
    int sum=0,count=0;
    while(temp!=0)//num of digits
    {
        temp=temp/10;
        count++;
    }

    int n=isArmstrongHelp(x,sum,count);
    if(n==x)
        return 1;
    return 0; 

}

int isArmstrongHelp(int num,int sum,int count)
{
    if(num==0)
        return sum;
    sum=sum+power(num%10,count); 
    return isArmstrongHelp(num/10,sum,count--);
}



int isPalindromeHelp(int temp,int reverse)
{
    if(temp==0)
        return reverse;
    reverse=reverse*10+temp%10;  
    return isPalindromeHelp(temp/10,reverse);    
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

