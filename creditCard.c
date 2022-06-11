#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int luhn(int);
int valid(int,int[]);
int main()
{
    int* crd;
    int I,count,h; 
    long long int card,card1,k;
    printf(“Welcome to card validation system\nPlease Enter your card number: “);
    scanf(“%lld”,&card);
    printf(“Your card number is %lld.”,card);
    //printf(“%d”,count);
    int digits = (int)(log10(card))+1;
    count = digits;
    if(count>=11 && count<=16)
   { int fd = (int)(card/pow(10,digits-1));
Crd= (int*)calloc(count,sizeof(int)); //dynamic allocation of array to store the card number
    for(i=0;i<count;i++)//storing number digit wise in the array
    {
        h=card%10;
        k=card/10;
        crd[count-1-i]=h;
        card=k;
    }
    for(i=1;i<count;i++)
     crd[count-(2*i)]=luhn(crd[count-(2*i)]);//doubling every second element from right

    if(valid(count,crd)==1)//checks if the sum of digit is divisible by 10 or not
	     { printf(“\nThe card number is valid “);
        if(fd==4)
        printf(“and it is a visa”);
        else if(fd==5)
        printf(“and it is a mastercard”);
        else if(fd==3)
        printf(“and it is a American express”);
        else if(fd==6)
        printf(“and it is a discover card”);
        }    
        else
        printf(“\nThe card number is not valid.”);
        }
        else
        printf(“\nNot a credit card”);
return 0;
}
int luhn(int a)//doubles the second digit from right and if double digit adds the digits
{
    int f,s;
    a=a*2;
    f=a/10;
    
S=a%10;
    a=f+s;
    return a;
}

int valid(int b,int a[])//adds all the digit and the check if the added number is divisible ny 10
{
    int I,sum=0;
    for(i=0;i<b;i++)
        sum=sum+a[i];
    if(sum%10==0)
     return 1;
    else
        return 0;
}
