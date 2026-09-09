#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >>t;
    for(int i=1; i<=t; i++){
        int n;
        cin>>n;
        int a[n];
        for (int i=0; i<n; i++) cin >> a[i];
        int x=0;
        for (int i=1; i<n-1; i++) if (a[i]==0) x++;
        for (int i=0; i<n; i++) {
        if (a[0]==0 && a[n-1]==0){
            cout<<"0"<<endl;
            break;
        }
        else if((a[0]==0 || a[n-1]==0) && x>=1) {
        cout<<"1"<<endl;
        break;}
        else if (a[0]!=0 && a[n-1]!=0 && x>1) {
            cout<<"2"<<endl;
            break;
        }
        else {
            cout<<"-1"<<endl;
            break;
        }
    }
}
}
//g++ A.cpp -o solution && ./solution