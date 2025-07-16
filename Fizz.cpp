// Write a program that prints the numbers from 1 to n. But for multiples
//  of 3, print "Fizz" instead of the number, and for multiples of 5, print 
//  "Buzz". For numbers which are multiples of both 3 and 5, print "FizzBuzz".
//   For all other numbers, print the number itself.

#include <iostream>
using namespace std;

int main() {
    int n = 15; // You can take input from user if needed: cin >> n;
    
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "FizzBuzz" << endl;
        else if (i % 3 == 0)
            cout << "Fizz" << endl;
        else if (i % 5 == 0)
            cout << "Buzz" << endl;
        else
            cout << i << endl;
    }

    return 0;
}
