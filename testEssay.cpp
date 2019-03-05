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
    cout << endl << "*Essay grading policy: A >= 80, B >=70, C >= 0" << endl;
    return 0;
    
    
}