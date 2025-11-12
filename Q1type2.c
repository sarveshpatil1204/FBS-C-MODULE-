#include<stdio.h>
    int evenodd();     //function declaration
    int main()
        {   
        {
           printf("Start with function \n");
        }
            if(evenodd())
        {
            printf("even");
        }
        else
         {
             printf("odd");
        }
  return 0;
}                                    //main end here
int evenodd()                      //function defination
{
   int no=13;
   return (no%2==0);
   
}