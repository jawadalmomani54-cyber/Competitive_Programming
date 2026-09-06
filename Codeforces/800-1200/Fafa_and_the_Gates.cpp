#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n >> s;
    int x=0, y=0, X=0, Y=0, x1=0, y1=0, count=0;
    for (int i=0 ; i<n; i++){
        if (s[i]=='U')
        y++;
        else if (s[i]=='R')
        x++;
        if (X==Y && x>y && y1>x1 || X==Y && x<y && y1<x1)
        count++;
        y1=Y;
        x1=X;
        Y=y;
        X=x;
    }
    cout << count;
}
