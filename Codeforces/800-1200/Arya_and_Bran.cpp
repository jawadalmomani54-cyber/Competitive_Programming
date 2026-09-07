#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    int count=0, days=0, adds=0;
    for (int i=0; i<n; i++){
        if (a[i]>8) {
            count+=8; 
            adds+=a[i]-8;
        }
        else {
            if (a[i]+adds<=8){
                count+=a[i]+adds;
                adds=0;
            }
            else {
                count+=8;
                adds-=8-a[i];
            }
        }
        days++;
        if (count>=k){
            cout<<days;
            return 0;
        }
    }
    cout<<"-1";
}
//g++ Arya_and_Bran.cpp -o solution && ./solution
