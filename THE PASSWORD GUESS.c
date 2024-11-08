#include<stdio.h>
int main()
{
    int password=1234567890;
    int guess;
    int guesscount=0;
    int guesslimit=3;
    int outofguess=0;
    while (password != guess && outofguess==0)
    {if (guesscount<guesslimit)
    {
        printf("enter the password of our platform:");
        scanf("%d", &guess);
        guesscount++;
    }
    else{
        outofguess = 1;
        
    }   
    }
    if (outofguess == 1)
    {
        printf("try later");
    }else{
        printf("the acces is available welcom to our page");
    }
    
    return 0;

}