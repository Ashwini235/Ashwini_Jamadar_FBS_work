#include<stdio.h>

struct Student
{
    int rollNo;
    char name[20];
    float marks;
};

void storeStudent(struct Student *s)
{
    printf("Enter RollNo Name Marks: ");
    scanf("%d %s %f", &s->rollNo, s->name, &s->marks);
}


void displayStudent(struct Student s)
{
    printf("\nRollNo : %d", s.rollNo);
    printf("\nName   : %s", s.name);
    printf("\nMarks  : %.2f\n", s.marks);
}


void storeStudentArray(struct Student s[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("\nEnter RollNo Name Marks for Student %d: ", i+1);
        scanf("%d %s %f",
              &s[i].rollNo, s[i].name, &s[i].marks);
    }
}


void displayStudentArray(struct Student s[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        displayStudent(s[i]);   
    }
}

void main()
{
    
    struct Student s1;
    storeStudent(&s1);     
    displayStudent(s1);     


    struct Student arr[2];
    storeStudentArray(arr, 2);   
    displayStudentArray(arr, 2);
}