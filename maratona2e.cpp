#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z,v;
    cin >> x >> y >> z;
    v = 3;

    if(z > y)
        v = v - 1;

    if(y > x || (x + y) < z)
        v = v - 1;

    cout << v << endl;
    
    return 0;
}
