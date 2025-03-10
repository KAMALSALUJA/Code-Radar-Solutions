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

    struct Student students[N], topScorer;

    // Input details for each student
    printf("Enter Roll Number, Name, and Marks for each student:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
        
        // Update top scorer
        if (i == 0 || students[i].marks > topScorer.marks) {
            topScorer = students[i];
        }
    }

    // Display details of the top scorer
    printf("Top Scorer: ");
    printf("Roll Number: %d, Name: %s, Marks: %.2f\n", 
           topScorer.rollNumber, topScorer.name, topScorer.marks);

    return 0;
}
