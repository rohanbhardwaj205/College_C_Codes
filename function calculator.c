#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
void sum(int,int);
void subtract(int,int);
void product(int,int);
void quotient(int,int);
void remain(int,int);
void power(int,int);
void main()
{
    char operation;
    int a,b;
    printf("Enter the operation you want to be done.\n");
    printf("Input \na for addition.\n s for subtraction.\n p for product. \n q for quotient. \n r for remainder.\n e for power \n");
    scanf("%c",&operation); // Will get input for the operation to be done.
    tolower(operation); // will lowercase the entered value. //tolower command not working??
    printf("Enter the value of first number \n");
    scanf("%d",&a); // get the input of the first value
    printf("Enter the second value \n");
    scanf("%d",&b); // get the input of the second value.
    switch (operation) // will work in place of multiple if and will work according;y.
    {
    case 'a': 
    case 'A': sum(a,b); break;
    case 's': 
    case 'S': subtract(a,b); break;
    case 'p': 
    case 'P': product(a,b); break;
    case 'q': 
    case 'Q': quotient(a,b); break;
    case 'r': 
    case 'R': remainder(a,b); break;
    case 'e': 
    case 'E': power(a,b);break;
    default: printf("Wrong Input");
    }
}
void sum(int x,int y)
{
    int add;
    add=x+y;
    printf("The sum of the given vlaues is = %d",add);
}
void subtract(int x, int y)
{
    int sub;
    sub=x-y;
    printf("The resultant subtraction is = %d",sub);
}
void product (int x, int y)
{
    int pro;
    pro=x*y;
    printf("The product of given values is = %d",pro);
}
void quotient (int x, int y)
{
    int quo;
    quo=x/y;
    printf("The quotient after diving values is = %d",quo);
}
void remain(int x, int y)
{
    int rem;
    rem=x%y;
    printf("The remainder after dividing above values is = %d",rem);
}
void power(int x, int y)
{
    int powe;
    powe=pow(x,y);
    printf("The resultant x^y is = %d", powe);
}
/*
clear screen ask
repeat ask
*/
