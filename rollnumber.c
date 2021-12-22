#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i, b[100];
    printf("Enter the number of roll numbers you want to enter.\n");
    scanf("%d",&a);
    printf("Enter the value: ");
    //int b[a]; // will create partition in form of b1, b2, b3, b4....
    for (i=1; i<=a; i++)
    {
        scanf("%d",&b[a]);
        if (i<a)
        {
            printf("\n Enter next value: \n"); // will might get printed even when next value is not to be printed.
        }
    }
    for (i=1; i<=a; i++)
    {
        if (i==1)
        {
            printf("%dst Entered roll number is: %d \n",i, b[a]);
        }
          if (i==2)
        {
            printf("%dnd Entered roll number is: %d \n",i, b[a]);
        }
          if (i==3)
        {
            printf("%drd Entered roll number is: %d \n",i, b[a]);
        }
          if (i>3)
        {
            printf("%dth Entered roll number is: %d \n",i, b[a]);
        }
    }
    //return 0;
  getch();
}
