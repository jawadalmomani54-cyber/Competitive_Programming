#include<iostream>
using namespace std;
int main(){
    int n, m=0;
    cin>>n;
    while(n--){
        int x, y, z;
        cin>>x>>y>>z;
        if (x+y+z>=2)
        m++;
    }
    cout<<m;
    return 0;
}