
#include<stdio.h>
    int vote();     //function declaration
   
 int main()
{
    {
        printf("Start with function \n");
    }
                //function calling
    vote();
    { printf("\n");
    printf("End function \n");
    }
    return 0;
}                        //main end her()      
int vote()                                 //function defination
{
  int no=16;
     if(no>=18)
     {
        printf("eligible to vote");
    }
 else
 {
   printf("not eligible to vote");

 }
};
