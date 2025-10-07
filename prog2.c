#include <stdio.h>

int main()
{
    // Declare Score Variable and Gread
    int score;
    char grade;

    // Geting User Score
    printf("Enter Your Score :- ");
    scanf("%d", &score);

    // write a logic for Enter more than 100 score
    if (score < 0 || score > 100)
    {
        printf("Please Enter Valide Score");
    }
    //write a logic for checking grade using ternary
      grade =  (score >= 90) ? 'A' :
               (score >= 80) ? 'B' :
               (score >= 70) ? 'C' :
               (score >= 50) ? 'D' : 'F';
            
    printf("Your Grade is : %c", grade);

    // write a logic for checking grade 
    switch (grade)
    {
    case 'A':
        printf(" Excellent!");
        break;
    case 'B':
        printf(" Well done!");
        break;
    case 'C':
        printf(" Great job!");
        break;
    
    case 'D':
        printf(" You passed, but do hard work for good marks .");
        break;
    default:
        printf(" Sorry , you failed");
        break;
    }

    return 0;
}