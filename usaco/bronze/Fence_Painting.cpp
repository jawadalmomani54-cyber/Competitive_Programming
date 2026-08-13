#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    //freopen("paint.in", "r", stdin);
    //freopen("paint.out", "w", stdout);
    int a[2], b[2];
    int x=0;
    for (int i=0; i<2; i++)
    cin>>a[i];
    for (int i=0; i<2; i++)
    cin>>b[i];
    sort(a, a+2);
    sort(b, b+2);
    if (a[1]<b[0] || b[1]<a[0])
    x=(a[1]-a[0])+(b[1]-b[0]);
    else {
        if (a[0]<b[0]){
            if (a[1]>b[1])
            x=a[1]-a[0];
            else 
            x= (b[1]-a[0]);
        }
        else {
            if (a[1]>b[1])
            x=a[1]-b[0];
            else 
            x= (b[1]-b[0]);
        }
    }
    cout<<x;
}