#include<iostream>
using namespace std;
int main(){
    double x = 0.1 + 0.2;

if (x == 0.3)
    cout << "Equal \n";
else
    cout << "Not Equal \n";

    double a = 0.1 + 0.2;
    double b = 0.3;

if (abs(a - b) < 1e-9)
    cout << "Equal";
}