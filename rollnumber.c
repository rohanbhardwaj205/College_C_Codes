#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;
    printf("Enter the number of roll numbers you want to enter.\n");
    scanf("%d",&a);
    printf("Enter the value: ");
    int b[100];
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
        if (/*i==1 && */i%10==1 && (i%100!=11)) // will print "th" for all values ending with 1 except for 11 and similar values.
        {
            printf("%dst Entered roll number is: %d \n",i, b[i]);
        }
        else  if (/*i==2 && */i%10==2 && (i%100!=12)) // will print "nd" for all values ending with 2 except for 12 and similar values.
        {
            printf("%dnd Entered roll number is: %d \n",i, b[i]);
        }
        else if (/*i==3 && */i%10==3 && (i%100!=13)) // will print "rd" for all values ending with 3 except for 13 and similar values.
        {
            printf("%drd Entered roll number is: %d \n",i, b[i]);
        }
        else 
        {
            /*
            if (i%10==1 && i!=11)
            {
                printf("%dst Entered roll number is: %d \n",i, b[i]);
            }
            else if (i%10==2 && i!=12)
            {
                printf("%dnd Entered roll number is: %d \n",i, b[i]);
            }
            else if (i%10==3 && i!=13)
            {
                printf("%drd Entered roll number is: %d \n",i, b[i]);
            }
        }
        else
            {*/
                printf("%dth Entered roll number is: %d \n",i, b[i]);
            }
        
    }
    //return 0;
    getch();
}
