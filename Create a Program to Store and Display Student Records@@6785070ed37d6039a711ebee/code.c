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
    printf("Enter the number of students: ");
    scanf("%d", &N);
    
    struct Student students[N]; // Array of structures
    
    // Input details for each student
    for (int i = 0; i < N; i++) {
        printf("Enter Roll Number, Name, and Marks for student %d: ", i + 1);
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }
    
    // Display student details
    printf("\nStudent Details:\n");
    for (int i = 0; i < N; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.1f\n", 
               students[i].rollNumber, students[i].name, students[i].marks);
    }