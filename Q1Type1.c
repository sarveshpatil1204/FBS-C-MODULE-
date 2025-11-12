#include<stdio.h>
    void evenodd();     //function declaration
   
 int main()
{
    {
        printf("Start with function \n");
    }
                //function calling
    evenodd();
    { printf("\n");
    printf("End function \n");
    }
    return 0;
}                                    //main end here
void evenodd()                      //function defination
{
   int no=12;
     if(no%2==0)
   {
    printf("no is even");
    }
 else
 {
    printf("no is odd");

 }
};
