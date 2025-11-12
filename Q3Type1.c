#include<stdio.h>
    int leaf();     //function declaration
   
 int main()
{
    {
        printf("Start with function \n");
    }
                //function calling
    leaf();
    { printf("\n");
    printf("End function \n");
    }
    return 0;
}                        //main end her()      
int leaf()                                 //function defination
{
   int year=2003;
        if(year%4==0&&year%100!=0||year%400==0)
   {
    printf("year is leaf");
    }
 else
 {
    printf("year is not leaf");

 }
};
