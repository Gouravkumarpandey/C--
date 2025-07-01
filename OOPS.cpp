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
    //setter - are used to set the value of private members
        void setSalary(double s){
            salary = s;
        }
        //getter - are used to the value of private members
            double getSalary(){
                return salary;
            }
    

};

int main(){
  Teacher t1;
    t1.name = "Gourav";
    t1.dept ="Computer Science";
    t1.setSalary(5000);

    cout<< t1.name << endl;
    cout<< t1.dept << endl;
    cout<< t1.getSalary() << endl;


    return 0;
}