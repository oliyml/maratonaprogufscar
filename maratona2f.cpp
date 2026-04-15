#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,h,l,dc,dj;

    cin >> a >> b >> c >> h >> l;

    if (b < a)
       swap(a, b);
    if (c < b)
       swap(c,b);
    if (b < a)
       swap(a,b);

    if (h > l)
       swap(h, l);
    
    if (a <= h && b <= l) 
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}
