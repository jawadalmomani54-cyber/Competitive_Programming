#include<iostream>
using namespace std;
int main(){
    int s, v1, v2, t1, t2;
    cin >>s>> v1>> v2>> t1>> t2;
    int x=0, y=0;
    x=(s*v1)+(2*t1);
    y=(s*v2)+(2*t2);
    if (x>y)
        cout<<"Second";
    else if (y>x)
    cout <<"First";
else
    cout<<"Friendship";
return 0;
}