#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
{
    int a,b;
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("ENter the value of b");
    scanf("%d",&b);
    swap(a,b);
}
void swap(int x, int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("a = %d",x);
    printf("b = %d",y);
}
