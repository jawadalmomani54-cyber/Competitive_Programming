#include<iostream>
#include<string>
using namespace std;
int main(){
    string x;
    int A=0, B=0;
    cin>>x; 
    for (int i=0; i<x.length(); i++){
        if(i%2!=0){continue;}
        else{
            if(x[i]=='A'){
                if(x[i+1]=='1')
                A=A+1;
                else if (x[i+1]=='2')
                A=A+2;
            }
            else if (x[i]=='B'){
                if(x[i+1]=='1')
                B=B+1;
                else if (x[i+1]=='2')
                B=B+2;
            }
        }
    }
    if (A>B)
    cout<<"A"<<endl;
    else if (B>A)
    cout<<"B"<<endl;
}