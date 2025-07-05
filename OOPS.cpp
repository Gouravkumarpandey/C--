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

     Student(const Student &obj){ // Copy constructor
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *(obj.cgpaPtr);
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

    Student s2(s1);
    s2.getInfo();
    return 0;
}