 #include <stdio.h>
 #include <conio.h>

void main()
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
           scanf("%s", &grade);           //program worked correctly after using string identifier in input.
           printf("Your grade is %c.", grade);

           getch();
}
