#include <iostream>
#include <string>
using namespace std;

class Teacher{
    //properties // attributes
    string  name ;
    string  dept;
    string subject ;
    double salary;

    //methods // member functions

    void changeDept(string newDept){
        dept= newDept;
    }

};

int main(){
  Teacher t1;
    t1.name = "Gourav";
    t1.dept ="Computer Science"
    t1.subject = "C++ Programming";
    t1.salary = 50000;
  


    return 0;
}