#include <iostream>
#include <algorithm> 
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int T = 1; T <= t; T++){
        int a;
        cin >> a;
        int q = 0, b = 0, c = 0;
        for (int i = 0; i < a; i++){
            int val;
            cin >> val; 
            if (val % 2 != 0) {
                q++;
            } 
            else if (val % 4 != 0) { 
                b++;
            } 
            else { 
                c++;
            }
        }
        cout << max(q, max(b, c)) << "\n"; 
    }
    return 0;
}