#include <bits/stdc++.h>
using namespace std;

int main(){
    int la,lb,ca,cb,sl,sc;

    cin >> la >> lb >> ca >> cb;

    if((la < 1 || la > 13) || (lb < 1 || lb > 13))
        return 0;
    else if((ca < 1 || ca > 13) || (cb < 1 || cb > 13))
        return 0;
    else{
    
        if(la == lb)
            sl = 2 * (la + lb);
        else if((la - lb) == 1 || (lb - la) == 1)
            sl = 3 * (la + lb);
        else
            sl = la + lb;

        if(ca == cb)
            sc = 2 * (ca + cb);
        else if((ca - cb) == 1 || (cb - ca) == 1)
            sc = 3 * (ca + cb);
        else
            sc = ca + cb;

        if(sl > sc)
            cout << "Lia" << endl;
        else if(sl == sc)
            cout << "empate" << endl;
        else
            cout << "Carolina" << endl;
    
    }
    return 0;
}
