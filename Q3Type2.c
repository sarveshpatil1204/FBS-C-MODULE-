#include<stdio.h>
    int leaf();     //function declaration
    int main()
        {   
        {
           printf("Start with function \n");
        }
            if(leaf())
        {
          printf("year is leaf");
        }
        else
         {
          printf("year is not leaf");
        }
  return 0;
}                                    //main end here
int leaf()                      //function defination
{
  int year=2004;
        return (year%4==0&&year%100!=0||year%400==0);
}
