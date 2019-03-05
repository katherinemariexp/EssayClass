#ifndef ESSAY_H
#define ESSAY_H
#include "GradedActivity.h"

using namespace std;
class Essay : public GradedActivity
{
    private:
        int grammar;
        int spelling;
        int correctLength;
        int content;
    public:
        Essay() 
        {
            grammar = 0;
            spelling = 0;
            correctLength = 0;
            content = 0;
        }
        
        Essay(int g, int s, int l, int c)
        {
            grammar = g;
            spelling = s;
            correctLength = l;
            content = c;
        }
        
        void set(int g, int s, int l, int c)
        {
            double totalScore;
            grammar = g;
            spelling = s;
            correctLength = l;
            content = c;
    
            totalScore = grammar + spelling + correctLength + content;
            setScore(totalScore);
        }
        
        int getGrammar() const
        {return grammar;}
        
        int getSpelling() const
        {return spelling;}
        
        int getLength() const
        {return correctLength;}
        
        int getContent() const
        {return content;}
        
        
};

#endif