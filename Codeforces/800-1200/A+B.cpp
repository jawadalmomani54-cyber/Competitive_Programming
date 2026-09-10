#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i=1; i<=t; i++){
    char x, y, z;
    cin>>x>>y>>z;
    cout << (x-'0') + (z-'0')<<endl;
    }
    return 0;
}
//g++ A+B.cpp -o solution && ./solution 