#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        if (s[0] == s[n - 1]) {
            if ((n - 3) % 2 != 0) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        } else {
            if ((n - 2) % 2 != 0) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }
    return 0;
}
//g++ A.cpp -o solution && ./solution 