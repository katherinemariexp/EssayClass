#include <iostream>
#include "Essay.h"

using namespace std;

int main()
{
    int grammar, spelling, length, content;
    
    cout << "Test 1: User provided data for Essay Class:" << endl;
    cout << "How many grammar points did the studen earn? (0-30): ";
    cin >> grammar;
    
    cout << "How many spelling points did the student earn? (0-20): ";
    cin >> spelling;
    
    cout << "How many points for length did the student earn? (0-20): ";
    cin >> length;
    
    cout << "How many points for content did the student earn? (0-30): ";
    cin >> content;
    
    Essay test(grammar, spelling, length, content);
    test.set(grammar, spelling, length, content);
    
    cout << endl << "Grammar points: " << test.getGrammar() << endl;
    cout << "Spelling points: " << test.getSpelling() << endl;
    cout << "Length points: " << test.getLength() << endl;
    cout << "Content points: " << test.getContent() << endl;
    cout << "Overall score: " << test.getScore() << endl;
    cout << "Grade: " << test.getLetterGrade() << endl;
    cout << endl << "*Essay grading policy: A >= 80, B >=70, C >= 0" << endl << endl;
    
    
    GradedActivity g85(85);
    cout << "g85(85):" << endl;
    cout << "Graded Score: " << g85.getScore() << ", "
         << "Grade: " << g85.getLetterGrade() << endl << endl;
    
    Essay report85(25,20,20,20);
    report85.set(25,20,20,20);
    cout << "report85(25,20,20,20):" << endl;
    cout << "Grammar points: " << report85.getGrammar() << endl;
    cout << "Spelling points: " << report85.getSpelling() << endl;
    cout << "Length points: " << report85.getLength() << endl;
    cout << "Content points: " << report85.getContent() << endl;
    cout << "Report score: " << report85.getScore() << ", "
         << "Grade: " << report85.getLetterGrade() << endl << endl;
        
    GradedActivity g65(65);
    cout << "g65(65):" << endl;
    cout << "Graded Score: " << g65.getScore() << ", "
         << "Grade: " << g65.getLetterGrade() << endl << endl;
    
    Essay report65(15,10,20,20);
    report65.set(15,10,20,20);
    cout << "report65(15,10,20,20):" << endl;
    cout << "Grammar points: " << report65.getGrammar() << endl;
    cout << "Spelling points: " << report65.getSpelling() << endl;
    cout << "Length points: " << report65.getLength() << endl;
    cout << "Content points: " << report65.getContent() << endl;
    cout << "Report score: " << report65.getScore() << ", "
         << "Grade: " << report65.getLetterGrade() << endl; 
         
         
    return 0;
         
}