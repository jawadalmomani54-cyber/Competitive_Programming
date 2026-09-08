#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=1, y=2;
    for(int i=0;i<n;i++){
        if (a[i]==x || a[i] == y) {
        if (a[i]==1 && (x==2 || x==3)){
            if (x==2) x=3;
            else if (x==3) x=2;
        }
        else if (a[i]==1 && (y==2 || y==3)){
            if (y==2) y=3;
            else if (y==3) y=2;
        }
        else if (a[i]==2 && (x==1 || x==3)){
            if (x==1) x=3;
            else if (x==3) x=1;
        }
        else if (a[i]==2 && (y==1 || y==3)){
            if (y==1) y=3;
            else if (y==3) y=1;
        }
        else if (a[i]==3 && (y==2 || y==1)){
            if (y==2) y=1;
            else if (y==1) y=2;
        }
        else if (a[i]==3 && (x==1 || x==2)){
            if (x==1) x=2;
            else if (x==2) x=1;
        }
    }
    else {
            cout<<"NO";
            return 0;
        }
    }
cout<<"YES";
}
// g++ Chess_For_Three.cpp -o solution && ./solution  