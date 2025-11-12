#include<stdio.h>
    char vowel();     //function declaration
    int main()
        {   
        {
           printf("Start with function \n");
        }
            if(vowel())
        {
          printf("char is vowel");
        }
        else
         {
          printf("char is consanant");
        }
  return 0;
}                                    //main end here
char vowel()                      //function defination
{
  char ch='s';

  return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}
