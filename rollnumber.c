#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;
    printf("Enter the number of roll numbers you want to enter.\n");
    scanf("%d",&a);
    printf("Enter the value: ");
    int b[100]; // an array variable is created which can hold number of values as b1,b2,b3...
    for (i=1; i<=a; i++)
    {
        scanf("%d",&b[i]);
        if (i<a)
        {
            printf("\n Enter next value: \n"); // will might get printed even when next value is not to be printed.
        }
    }
    for (i=1; i<=a; i++)
    {
        if (i%10==1 && (i%100!=11)) // will print "st" for all values ending with 1 except for 11 and similar values.
        {
            printf("%dst Entered roll number is: %d \n",i, b[i]);
        }
        else  if (i%10==2 && (i%100!=12)) // will print "nd" for all values ending with 2 except for 12 and similar values.
        {
            printf("%dnd Entered roll number is: %d \n",i, b[i]);
        }
        else if (i%10==3 && (i%100!=13)) // will print "rd" for all values ending with 3 except for 13 and similar values.
        {
            printf("%drd Entered roll number is: %d \n",i, b[i]);
        }
        else 
        {
            printf("%dth Entered roll number is: %d \n",i, b[i]); // will print "th" at the end of all remaining values that don't follow above rules.
        }
        
    }
    getch();
}
