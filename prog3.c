#include <stdio.h>

int main()
{
    // Declare Score Variable and Grade
    int score;
    char grade;

    // Getting User Score
    printf("Enter Your Score :- ");
    scanf("%d", &score);

    // write a logic for Enter more than 100 score
    if (score < 0 || score > 100)
    {
        printf("Please Enter Valid Score");
    }

    //write a logic for checking grade ternary
     grade =  (score >= 90) ? 'A' :
              (score >= 80) ? 'B' :
              (score >= 70) ? 'C' :
              (score >= 50) ? 'D' : 'F';
            
    printf("Your Gread is : %c", grade);

    // write a logic for checking grade 
    switch (grade)
    {
    case 'A':
        printf(" Excellent work!");
        break;
    case 'B':
        printf(" Well done");
        break;
    case 'C':
        printf(" Good job");
        break;
      case 'D':
        printf(" You passed, but you could do better.");
        break;
    default:
        printf(" Sorry bro!, you failed");
        break;
    }

    //write the logic for level
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
       printf(" Congratulations! You are ligible for the next level");
    }
    else
    {
        printf(" Please try again next time");
    }    
    
    return 0;
}