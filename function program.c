/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int fun(int a,int b)
{
    if(a==0 || b==0)
    {
        return a;
    }
    if(b%2==0)
    {
        fun(a/2,b/3);
    }
    return fun(a+1,b-1);
}
int main()
{
    int x=12,y=10;
    int z=fun(x,y);
    printf("%d",z);
    return 0;
}