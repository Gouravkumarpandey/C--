#include <iostream>
#include <unordered_map>
using namespace std;

string isProper(const string& s){
    unordered_map <char, int> freq;

    for(char c : s){
        freq[c]++;
        if(freq[c]> 1){
            return "ProperSubstring";
        }
    }

    return "NotProperSubstring";

}

int main( ){
    string s;
    cin >> s;
    cout << isProper (s)<< endl;
    return 0;
}