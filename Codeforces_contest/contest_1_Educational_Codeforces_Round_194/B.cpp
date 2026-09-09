#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        long long count = 0;
        long long D = y - x; 
        while (k > 0 && x <= D) {
            count += D % x;
            x++;
            k--;
        }
        if (k > 0) {
            count += k * D;
        }
        cout << count << "\n";
}
return 0;
}
// g++ B.cpp -o solution && ./solution