#include <stdio.h>
struct Student {
    char name[50];
    float marks[10];
    int numSubjects;
    float average;
    char grade;
};

void getMarks(float marks[], int n) {
    for (int i = 0; i < n; i++){
        printf("Enter marks for subject %d; ",i+1);
        scanf("%f", &marks[i]);
    }
}

float calcAverage(float marks[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }
    return sum/n;
}
    char getGrade(float average){
        if (average >= 90)
            return 'A';
        else if (average >= 75)
            return 'B';
        else if (average >= 60)
            return 'C';
        else if (average >= 40)
            return 'D';
        else
            return 'F';
    }
    void printReport(char name[], float marks[], int n, float average, char grade){
printf("\n-- Report Card: %s --\n", name);
        for (int i = 0; i < n; i++) {
            printf("Subject %d: %.2f\n",i+1, marks[i]);

    }
    printf("Average: %.2f\n", average);
    printf("Grade:   %c\n", grade);
}
int main() {
    struct Student s;
printf("Enter student name: ");
scanf("%s", s.name);
printf("Enter number of subjects: ");
scanf("%d", &s.numSubjects);
    float marks[s.numSubjects];

    getMarks(s.marks, s.numSubjects);
s.average = calcAverage(s.marks, s.numSubjects);
s.grade = getGrade(s.average);
printReport(s.name, s.marks, s.numSubjects, s.average, s.grade);
}