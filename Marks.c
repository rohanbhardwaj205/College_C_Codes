 #include <stdio.h>
 #include <stdlib.h>

int main()
{
           int age;
           printf("Enter you age: ");
           scanf("%d", &age);  
           printf("You are %d years old.\n", age);

           printf("-----------------------------\n");
           double gpa;
           printf("Enter your GPA: ");
           scanf("%lf", &gpa);
           printf("Your GPA is %f. \n", gpa);

           printf("-----------------------------\n");
           char grade;
           printf("Enter you grade: ");
           scanf("%c", &grade);
           printf("Your grade is %c.", grade);

           return 0;
}
