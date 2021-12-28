#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
    int a,b,c,i;
    char operation[2],repeat[2];
    i=1;

    while (i>=1)
    {
        printf("Enter the operation you want to be done.\n");
        printf("Like 'a' for addition\n 's' for subtraction\n'p'for multiplication\n'd' for quotient\n'r' for remainder\n");
        scanf("%s",&operation[2]);
        operation[2]=tolower(operation[2]);
        printf("\nEnter the value of first number: ");
        scanf("%d",&a);
        printf("\nEnter the value of second number: ");
        scanf("%d",&b);
        switch (operation[2])
        {
        case 'a': c=a+b; printf("\nThe sum is %d\n",c); break;
        case 's': c=a-b; printf("\nThe answer is %d\n",c);  break;
        case 'm': c=a*b; printf("\nThe product is %d\n",c);  break;
        case 'd': c=a/b; printf("\nThe quotient is %d\n",c);  break;
        case 'r': c=a%b; printf("\nThe remainder is %d\n",c);  break;
        default: printf("Wrong Input. \nPlease check the operation.");
        }
        printf("Do you want to more operations to be done.\n'Y' for yes, 'N' for no.");
        scanf("%s",&repeat[2]);
        repeat[2]= toupper(repeat[2]);
        if (repeat[2]=='N')
        {
            i=i-i;
        }
    }
 getch();
}
