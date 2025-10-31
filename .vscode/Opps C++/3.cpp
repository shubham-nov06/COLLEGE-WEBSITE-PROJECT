#include<iostream>
#include<string>
using namespace std;
class student {
    public :
    string name ;
    string rollnumber ;
    char grade ;

} ;
int main()
{
    student s1 ;
    s1.name = "Simran" ;
    s1.rollnumber = "2001" ;
    s1.grade = 'A' ;
    cout << "Name of student is = " << s1.name << endl ;
    cout << "Roll number of student is = " << s1.rollnumber << endl ;
    cout << "Grade of student is = " << s1.grade << endl ;
    return 0 ;
}
