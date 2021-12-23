#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,t,g;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    label:
    {
        if (b<=a)
        {
            label2:
            {
                if(b==0)
                {
                    printf("The resulant HCF is %d",a);
                }
                else
                {
                    t=a%b;
                    a=b;
                    b=t;
                    goto label2;
                }
            }
        } 
        else 
        {
            t=a;
            a=b;
            b=t;
            goto label;
        }
    }
}
