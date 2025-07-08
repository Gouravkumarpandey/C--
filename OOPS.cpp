#include <iostream>
#include <string>

using namespace std;

class Student {

    public:
     string  name;
     double* cgpaPtr;

     Student(string name, double cgpa){ // This is constructor
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
     }

     Student(const Student &obj){ // deep Copy constructor 
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *(obj.cgpaPtr);//deep copy
     }

     Student() { // Destructor
        delete cgpaPtr;
     }

     void getInfo() {
        cout << "name: "<< name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
     }
};

int main (){
    Student s1("Rahul Kumar", 9.5);
    Student s2(s1);//neha kumari


    s1.getInfo();
    *(s2.cgpaPtr) = 10.0;
    s1.getInfo();

    s2.getInfo();
    return 0;
}