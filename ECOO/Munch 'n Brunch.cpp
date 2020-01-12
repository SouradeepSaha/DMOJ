#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int k = 0; k < 10; k++) {
        int cost, tot, st[4], rem=0;
        double per[4], rai;
        cin >> cost;
        for (int i = 0; i < 4; i++) cin >> per[i];
        cin >> tot;
        for (int i = 0, rem = tot; i < 4; i++) st[i] = int (tot * per[i]), rem -= st[i];
        //cout << rem << endl;
        *(max_element(st, st+4)) += rem;

        rai = 0.5 * (st[0] * 12 + st[1] * 10 + st[2] * 7 + st[3] *5);
        //cout << st[1];
        if (rai >= cost) cout << "NO\n";
        else cout << "YES\n";

    }
    return 0;
}
