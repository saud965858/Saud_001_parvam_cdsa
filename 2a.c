#include<stdio.h>

int main()
{
    int y;
    printf("%s",(y%4==0&&y%100!=0)||(y%100==0&&y%400==0)?"it is a leap year":"it is not a leap year");
    return 0;
}