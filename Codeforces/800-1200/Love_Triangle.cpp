#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i!=j && a[a[i]-1]==j+1 && a[j]-1==i){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}
//g++ Love_Triangle.cpp -o solution && ./solution