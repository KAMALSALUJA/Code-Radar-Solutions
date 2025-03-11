#include <stdio.h>


// Define a structure for Student
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int N;

    // Taking input for number of students
   // printf("Enter the number of students: ");
    scanf("%d", &N);

    struct Student students[N];
    int total=0, average;

    // Input details for each student
    //printf("Enter Roll Number, Name, and Marks for each student:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].rollNumber, &students[i].name, &students[i].marks);
        
        // Average of marks
        
            total += students[i].marks;
        }
        average=total/N;


    // Display details of the top scorer
    printf("Average marks:");
    printf("%.2f", average);

    return 0;
}
