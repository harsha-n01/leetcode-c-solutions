#include <stdio.h>


typedef struct
{
    char name[50];
    int roll_no;
    char mobile_no[15];
    float cgpa;
    char dob[15];
    char course[30];
    int year;
} Student;


void readStudent(Student *s)
{


    printf("\nEnter Name: ");
    gets(s->name);

    printf("Enter Roll Number: ");
    scanf("%d", &s->roll_no);

    printf("Enter Mobile Number: ");
    scanf("%s", s->mobile_no);

    printf("Enter CGPA: ");
    scanf("%f", &s->cgpa);

    printf("Enter Date of Birth (DD/MM/YYYY): ");
    scanf("%s", s->dob);

   

    printf("Enter Course: ");
    gets(s->course);

    printf("Enter Year: ");
    scanf("%d", &s->year);
}

void displayStudent(Student s)
{
    printf("\n----- Student Details -----\n");
    printf("Name        : %s\n", s.name);
    printf("Roll No     : %d\n", s.roll_no);
    printf("Mobile No   : %s\n", s.mobile_no);
    printf("CGPA        : %.2f\n", s.cgpa);
    printf("Date of Birth: %s\n", s.dob);
    printf("Course      : %s\n", s.course);
    printf("Year        : %d\n", s.year);
}


Student findTopper(Student s[], int n)
{
    int i, topperIndex = 0;

    for(i = 1; i < n; i++)
    {
        if(s[i].cgpa > s[topperIndex].cgpa)
        {
            topperIndex = i;
        }
    }

    return s[topperIndex];
}

int main()
{
    Student students[10];
    Student topper;
    int i;

    printf("Enter Details of 10 Students:\n");

    for(i = 0; i < 10; i++)
    {
        printf("\n--- Student %d ---\n", i + 1);
        readStudent(&students[i]);
    }

    topper = findTopper(students, 10);

    printf("\n\nTopper of the Class:\n");
    displayStudent(topper);

    return 0;
}

