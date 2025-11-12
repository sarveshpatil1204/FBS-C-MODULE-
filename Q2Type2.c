#include<stdio.h>
    int palindrom();     //function declaration
    int main()
        {   
        {
           printf("Start with function \n");
        }
            if(palindrom())
        {
            printf("no is palindrom");
        }
        else
         {
             printf("no is not palindrom");
        }
  return 0;
}                                    //main end here
int palindrom()                      //function defination
{
 int no=121;
 int r1,r2,r3,rev;
 int q1;
   r1=no%10;
   q1=no/10;
   r2=q1%10;
   r3=q1/10;
   rev=r1*100+r2*10+r3;
   return (rev==no);
   
}