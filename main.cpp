/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class ParentOne {
    public:
        string ParentOneName;
        
    ParentOne(string Name){
        ParentOneName= Name;
        
    }
    void introduce(){
        cout << "Hi my name is: " << ParentOneName<< endl;
    }
};
class ParentTwo {
    public:
        string ParentTwoName;
    ParentTwo(string Name){
        ParentTwoName = Name;
    }
    void introduce(){
        cout << "Hi my name is: " << ParentTwoName<< endl;
    }
};
class ChildClass: public ParentOne, public ParentTwo {
    public:
        string Name;
    ChildClass(string name1, string name2, string Name ): ParentOne(name1), ParentTwo(name2){
        this-> Name = Name;
    }
    void familyName (){
        cout << "Child with the name: " << Name << " Is child of " << ParentOneName << " and " << ParentTwoName << endl;
    }
    void introduce(){
        cout << "Hi my name is: " << Name<< endl;
    }

};

int main()
{
    ChildClass child("George", "Lily",  "James");
    child.familyName();
    
    child.ParentTwo::introduce();
    child.ParentOne::introduce();
    
}