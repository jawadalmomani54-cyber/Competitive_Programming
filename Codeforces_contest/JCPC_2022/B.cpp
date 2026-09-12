#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int T=1; T<=t; T++){
        int n;
        cin>> n;
        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];
        sort(a, a + n);
        if (a[0]<0 && a[n-1]>0) cout <<"2"<<endl;
        else cout << "1"<<endl;
    }
}
//g++ B.cpp -o solution && ./solution