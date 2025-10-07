#include <stdio.h>

int main()
{
    int score; 
    char grade;

    printf("Enter Your Score :- ");
    scanf("%d", &score); 

    
    if (score < 0 || score > 100)
    {
        printf("Please Enter Valid Score");
    }

   
    grade =  (score >= 90) ? 'A' :
             (score >= 80) ? 'B' :
             (score >= 70) ? 'C' :
             (score >= 60) ? 'D' :
             (score >=50)  ? 'E' : 'F';

    printf("Your Grade is : %c", grade);  
   
    return 0;
}