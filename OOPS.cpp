#include<iostream>
using namespace std;
class Student{
    private:
        int rollNo;
        string name;

        public :
            void setRollNo(int r){
                rollNo = r;

            }

            void setName(string n){
                name = n;
                
            }
            int getRollNo() {
                rollNo = 0;
                return rollNo;
            }
            string getName() {
                name = "Unknown";
                return name;

    
            }
};
