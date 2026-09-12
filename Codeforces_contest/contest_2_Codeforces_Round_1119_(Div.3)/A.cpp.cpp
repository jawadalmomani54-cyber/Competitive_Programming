#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int T = 1; T <= t; T++){ 
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s; 
        int m = 0,  r = 0; 
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                m++;
            }
            if ((i + 1) % k == 0){
                if (m == k) {
                    r++;
                }
                m = 0;
            }
        }
        cout << r << endl;
    }
    return 0;
}