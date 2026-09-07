#include <iostream>
#include <algorithm> 
using namespace std;
int main(){
    float h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h = h + (m/60.0) + (s/3600.0);
    m = (m/5.0) + (s/300.0);
    s = s / 5.0;
    if (h >= 12) h -= 12;
    if (m >= 12) m -= 12;
    if (s >= 12) s -= 12;
    if (t1 == 12) t1 = 0;
    if (t2 == 12) t2 = 0;
    if (t1 > t2) swap(t1, t2);
    int inside = 0;
    if (h > t1 && h < t2) inside++;
    if (m > t1 && m < t2) inside++;
    if (s > t1 && s < t2) inside++;
    if (inside == 0 || inside == 3)
        cout << "YES";
    else
        cout << "NO";
        
    return 0;
}
/*
first attempt


#include<iostream>
using namespace std; 
int main(){
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    m=m/5;
    s=s/5;
    int x=t1, y=8;
    for (int i=0; i<8; i++){
        if (x==12)
        x=0;
        x++;
        if (x!=h && x!=m && x!=s && x==t2){
            cout << "YES";
            return 0;
        }
        else if (x==h || x==m || x==s){
            break;
        }
        else if (i==7){
            break;
        }
    }
    x=t1;
    for (int i=0; i<8; i++){
        if (x==0)
        x=12;
        x=x-1;
        if (x!=h && x!=m && x!=s && x==t2){
            cout << "YES";
            return 0;
        }
        else if (x==h || x==m || x==s){
            cout<< "NO";
            return 0;
        }
        else if (i==7){
            cout << "NO";
            return 0;
        }
}
}
*/