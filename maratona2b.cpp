#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, m;
    cin >> a >> m;

    if (a < 1 || a > 50)
        return 0;
    else if (m < 1 || m > 50)
        return 0;
    else{
        if(a + m == 50 || (((a + m) >= 1) && ((a + m) <= 50)))
            cout << "S" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}
