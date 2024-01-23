#include "numClass.h"
#include <stdio.h>

int max(int,int);
int min(int,int);

int main()
{
    int n1,n2;
    printf("enter 2 numbers to be the range\n");
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
    int count=0;

    //print all the Armstrong numbers
    printf("All the Armstrong numbers: ");
    for(int i=smaller;i<=bigger;i++)
    {
        if(isArmstrong(i)==1 && count==0)
        {
            printf("%d",i);
            count++;
        }
            
        else if(isArmstrong(i)==1)
        {
            printf(", ");
            printf("%d",i);
        }
    }

    printf("\n");
    int count1=0;

    //print all the Palindrome numbers
    printf("All the Palindrome numbers: ");
    for(int l=smaller;l<=bigger;l++)
    {
        if(isPalindrome(l)==1 && count==0)
        {
            printf("%d",l);
            count1++;
        }
            
        else if(isPalindrome(l)==1)
        {
            printf(", ");
            printf("%d",l);
        }
    }

    printf("\n");
    int count2=0;

    //print all the Prime numbers
    printf("All the Prime numbers: ");
    for(int j=smaller;j<=bigger;j++)
    {
        if(isPrime(j)==1 && count==0)
        {
            printf("%d",j);
            count2++;
        }
            
        else if(isPrime(j)==1)
        {
            printf(", ");
            printf("%d",j);
        }
    }

    printf("\n");
    int count3=0;

    //print all the Strong numbers
    printf("All the Strong numbers: ");
    for(int h=smaller;h<=bigger;h++)
    {
        if(isStrong(h)==1 && count3==0)
        {
            printf("%d",h);
            count3++;
        }
            
        else if(isStrong(h)==1)
        {
            printf(", ");
            printf("%d",h);
        }
    }

    printf("\n");

    return 1;

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



