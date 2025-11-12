#include<stdio.h>
    int  vote();     //function declaration
    int main()
        {   
        {
           printf("Start with function \n");
        }
            if(vote())
        {
          printf("eligible to vote");
        }
        else
         {
          printf("not eligible to vote");
        }
  return 0;
}                                    //main end here
int vote()                      //function defination
{
   int no=20;
     return (no>=18);
}


