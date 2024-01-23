#include "numClass.h"
#include <stdio.h>

int max(int,int);
int min(int,int);

int main(int argc, char *argv[])
{
    int n1,n2;
    //printf("enter 2 numbers to be the range\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    /*int FLAG;
    FLAG=0;
    while(FLAG==0)
    {
    if(scanf("%d",&n1))
        if(scanf("%d",&n2))
            FLAG=1;
        else
            printf("input isn't an integer,please enter another numbers") ;   
    else
        printf("input isn't an integer,please enter another numbers");    
    }*/  

    /*if(isPrime(n1)==1)
        printf("%d is prime \n",n1);
    else
        printf("%d isnt prime \n",n1);  

    if(isArmstrong(n1)==1)
        printf("%d is armstrong \n",n1);
    else
        printf("%d isnt armstrong \n",n1);   

    if(isStrong(n1)==1)
        printf("%d is strong \n",n1);
    else
        printf("%d isnt strong \n",n1);       

    if(isPalindrome(n1)==1)
        printf("%d is Palindrome \n",n1);
    else
        printf("%d isnt Palindrome \n",n1);*/

             

    int bigger=max(n1,n2);
    int smaller=min(n1,n2);

    //print all the Armstrong numbers
    printf("The Armstrong numbers are:");
    for(int i=smaller;i<=bigger;i++)
    {
        if(isArmstrong(i)==1)
        {
            printf(" %d",i);
        }
    }

    printf("\n");

    //print all the Palindrome numbers
    printf("The Palindromes are:");
    for(int l=smaller;l<=bigger;l++)
    {
            
         if(isPalindrome(l)==1)
        {
            printf(" %d",l);
        }
    }

    printf("\n");

    //print all the Prime numbers
    printf("The Prime numbers are:");
    for(int j=smaller;j<=bigger;j++)
    {       
        if(isPrime(j)==1)
        {
            printf(" %d",j);
        }
    }

    printf("\n");

    //print all the Strong numbers
    printf("The Strong numbers are:");
    for(int h=smaller;h<=bigger;h++)
    {  
        if(isStrong(h)==1)
        {
            printf(" %d",h);
        }
    }

    printf("\n");

    return 0;

}

int max(int n1,int n2)
{
    if(n1>n2)
        return n1;
    return n2;    
}

int min(int n1,int n2)
{
    if(n2<=n1)
        return n2;
    return n1;    
}



