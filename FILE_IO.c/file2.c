#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[10];
    int roll;
    float marks;

    printf("Enter the name of the student=\n");
    scanf("%s", name);

    printf("Enter the roll no of the student=\n");
    scanf("%d", &roll);

    printf("Enter the marks of the student=\n");
    scanf("%f", &marks);

    fprintf(fptr, "Students name=%s\n", name);
    fprintf(fptr, "Students roll no=%d\n", roll);
    fprintf(fptr, "Student cgpa=%.2f\n", marks);

    return 0;
}
