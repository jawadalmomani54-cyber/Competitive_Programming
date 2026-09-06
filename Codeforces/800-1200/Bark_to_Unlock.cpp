#include <iostream>
#include <string>
using namespace std;
int main() {
    string n;
    int t;
    cin >> n >> t;
    bool first_char = false; 
    bool second_char = false;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s; 
        if (s == n) {
            cout << "YES";
            return 0;
        }
        if (s[1] == n[0]) {
            first_char = true;
        }
        if (s[0] == n[1]) {
            second_char = true;
        }
    }
    if (first_char && second_char) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}