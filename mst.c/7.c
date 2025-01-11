#include <stdio.h>

int main() {
    int score;
    char grade;

    // Input score from user
    printf("Enter score (0-100): ");
    scanf("%d", &score);

    // Check if score is valid
    if (score < 0 || score > 100) {
        printf("Invalid Score\n");
    } else {
        // Determine grade using nested if-else
        if (score >= 90) {
            grade = 'A';
        } else {
            if (score >= 80) {
                grade = 'B';
            } else {
                if (score >= 70) {
                    grade = 'C';
                } else {
                    if (score >= 60) {
                        grade = 'D';
                    } else {
                        if (score >= 50) {
                            grade = 'E';
                        } else {
                            grade = 'F';
                        }
                    }
                }
            }
        }
        // Output the grade
        printf("Grade: %c\n", grade);
    }

    return 0;
}
