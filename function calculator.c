#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void sum(int,int);
void subtract(int,int);
void product(int,int);
void quotient(int,int);
void remain(int,int);
void power(int,int);
int main()
{
    char operation;
    int a,b;
    char repeat;
    repeat:
    //clrscr();
    {

    printf("Enter the operation you want to be done.\n");
    printf("Input \na for addition.\n s for subtraction.\n p for product. \n q for quotient. \n r for remainder.\n e for power \n");
    scanf("%c",&operation); // Will get input for the operation to be done.
    operation=tolower(operation); // will lowercase the entered value. //tolower command not working??
    printf("Enter the value of first number \n");
    scanf("%d",&a); // get the input of the first value
    printf("Enter the second value \n");
    scanf("%d",&b); // get the input of the second value.
    switch (operation) // will work in place of multiple if and will work according;y.
    {
    case 'a': sum(a,b); break;
    case 's': subtract(a,b); break;
    case 'p':product(a,b); break;
    case 'q':quotient(a,b); break;
    case 'r':remain(a,b); break;
    case 'e': power(a,b);break;
    default: printf("Wrong Input");
    }
    }
    printf("Do you want to do more calculations? Y or N");
    scanf("%c",&repeat);
    printf("%c",repeat);
    repeat=tolower(repeat);
    if (repeat=='Y')
    {
     goto repeat;
    }
    else
    {
        getch();
    }
return 0;
}
void sum(int x,int y)
{
    int add;
    add=x+y;
    printf("The sum of the given vlaues is = %d\n",add);
}
void subtract(int x, int y)
{
    int sub;
    sub=x-y;
    printf("The resultant subtraction is = %d\n",sub);
}
void product (int x, int y)
{
    int pro;
    pro=x*y;
    printf("The product of given values is = %d\n",pro);
}
void quotient (int x, int y)
{
    int quo;
    quo=x/y;
    printf("The quotient after diving values is = %d\n",quo);
}
void remain(int x, int y)
{
    int rem;
    rem=x%y;
    printf("The remainder after dividing above values is = %d\n",rem);
}
void power(int x, int y)
{
    int powe;
    powe=pow(x,y);
    printf("The resultant x^y is = %d\n", powe);
}
/*
clear screen ask
repeat ask
*/
