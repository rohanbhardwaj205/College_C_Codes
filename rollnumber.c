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
        if (i==1)
        {
            printf("%dst Entered roll number is: %d \n",i, b[i]);
        }
          if (i==2)
        {
            printf("%dnd Entered roll number is: %d \n",i, b[i]);
        }
          if (i==3)
        {
            printf("%drd Entered roll number is: %d \n",i, b[i]);
        }
          if (i>3)
        {
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
            {
                printf("%dth Entered roll number is: %d \n",i, b[i]);
            }
        
    }
    //return 0;
    getch();
}
