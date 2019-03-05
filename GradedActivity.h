#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

class GradedActivity
{
    private: 
        double score;
    public: 
        GradedActivity()
        {score = 0.0;}
        
        
        GradedActivity(double s)
        {score = s;}
        
        void setScore(double s)
        {score = s;}
        
        double getScore() const
        {return score;}
        
        char getLetterGrade() const
        {
            char letterGrade;
    
            if (score >= 80)
                letterGrade = 'A';
            else if (score >= 70)
                letterGrade = 'B';
            else
                letterGrade = 'C';
        
            return letterGrade;
        }
};

#endif