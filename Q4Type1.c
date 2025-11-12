#include<stdio.h>
    char vowel();     //function declaration
   
 int main()
{
    {
        printf("Start with function \n");
    }
                //function calling
    vowel();
    { printf("\n");
    printf("End function \n");
    }
    return 0;
}                        //main end her()      
char vowel()                                 //function defination
{
   char ch='s';

  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
   {
        printf("char is vowel");
    }
 else
 {
   printf("char is consanant");

 }
};
