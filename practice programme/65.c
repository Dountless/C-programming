#include<stdio.h>
#define CUBE(X) (X*X*X)
int main()
{
        int a,b=3;
        a=CUBE(++b)/++b; 
        printf("%d %d\n",a,b);
        return 0;
}

