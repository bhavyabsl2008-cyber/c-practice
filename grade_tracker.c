#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of subjects: ");
    scanf("%d",&n);

    float marks[n];
     
    for(int i=0;i<n;i++)
    {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%f",&marks[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("Subject %d: %.2f\n", i+1, marks[i]);
    }
    float sum = 0;
    for(int i = 0;i<n;i++){
        sum += marks[i];

    }
    float average = sum/n;
    printf("\nAverage Marks: %.2f\n",average);

    char grade;
    if (average >= 90)      grade = 'A';
    else if (average >= 75) grade = 'B';
    else if (average >= 60) grade = 'C';
    else if (average >= 40) grade = 'D';
    else                    grade = 'F';

    printf("Grade: %c\n",grade);



    return 0;
}


