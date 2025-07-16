#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>
using namespace std;

string isSimilar(const string& a, const string& b) {
    unordered_map<char, int> freq_a, freq_b;

    for (char c : a) freq_a[c]++;
    for (char c : b) freq_b[c]++;

    for (char ch = 'a'; ch <= 'z'; ++ch) {
        int count_a = freq_a[ch];
        int count_b = freq_b[ch];
        if (abs(count_a - count_b) > 3)
            return "NO";
    }

    return "YES";
}

int main() {
    int n;
    cin >> n;
    
    vector<string> s(n), t(n);
    for (int i = 0; i < n; ++i) cin >> s[i];
    for (int i = 0; i < n; ++i) cin >> t[i];

    for (int i = 0; i < n; ++i) {
        cout << isSimilar(s[i], t[i]) << endl;
    }

    return 0;
}
