#include <iostream>
#include <string>
using namespace std;

class Teacher{
    private:     
    double salary;

   public:
    //properties // attributes
    string  name ;
    string  dept;
    string subject ;


    //copy constructor
    Teacher(Teacher &orgObj){ //pass by reference 
        this ->name = orgObj.name;
        this-> dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    void changeDept(string newDept){
        dept= newDept;
    }
    //setter - are used to set the value of private members
       
    void getInfo(){
        const << "name : " << name << endl;
        const << "subject : " << subject << endl;
    }
    

};

int main(){
  Teacher t1("Gourav","Computer Science","C++",25000 );
  //t1.getInfo();

  Teacher t2(t1); //copy constructor - invoke
  t2.getInfo();


    return 0;
}