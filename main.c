#include <stdio.h>
#include <stdlib.h>

#define Name "Yelyzaveta"
#define LastName "Stadnik"
#define GroupName "RE-22"
#define Faculty "RTF"
#define University "Igor Sikorsky Kyiv Polytechnic Institute"

int main()
{
    unsigned int age;
    unsigned int semestr;
    float admissionScore;
    int grade1;
    int grade2;
    int grade3;
    double averageGrade;
    printf("%s %s Enter following data.\n", Name, LastName);
     printf("Enter semestr:");
     scanf("%u", &semestr);
     printf("Enter your admission score: ");
     scanf("%f", &admissionScore);
    printf("Enter grade #1: ");
     scanf("%d", &grade1);
     printf("Enter grade #2:");
     scanf("%d", &grade2);
     printf("Enter grade #3:");
     scanf("%d", &grade3);
     printf("Enter your age: ");
     scanf("%u", &age);
     averageGrade = (double)(grade1 + grade2 + grade3) / 3;
    system("cls");
     printf("%s", University);
     printf("\n%s", Faculty);
     printf("\n%s", GroupName);
     printf("\n***************");
     printf("\nStudent: %s %s", Name, LastName );
     printf("\nAge: %u", age);
     printf("\nSemestr: %u", semestr);
     printf("\n***************");
     printf("\nAdmission score: %.2f", admissionScore);
     printf("\nAverage grade = %.3lf", averageGrade);
     printf("\n");

     return 0;

}


