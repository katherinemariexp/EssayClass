#include "GradedActivity.h"

char GradedActivity::getLetterGrade const
{
    char letterGrade;
    
    if (score > 80)
        letterGrade = 'A';
    else if (score > 70)
        letterGrade = 'B';
    else
        letterGrade = 'C';
        
    return letterGrade;
}