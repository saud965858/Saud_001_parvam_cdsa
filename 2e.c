#include <stdio.h>
int main() 
{
    int n=5,i=20;
    while(i++<500)
        printf("%d x %d = %d\n",n,i,n*i);
    return 0;
}