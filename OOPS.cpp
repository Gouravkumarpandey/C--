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

    //methods // member functions

    void changeDept(string newDept){
        dept= newDept;
    }
    //setter
        void setSalary(double s){
            salary = s;
        }
        //getter
            double getSalary(){
                return salary;
            }
    

};

int main(){
  Teacher t1;
    t1.name = "Gourav";
    t1.dept ="Computer Science"
    t1.subject ="C++ Programming";
    t1.salary = 50000;
  


    return 0;
}