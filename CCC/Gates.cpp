//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int ngate, nplane, tmp, max =0, maxsum =0;
    cin >> ngate >> nplane;
    vector <int> sum(nplane+1);
    bool full = false;
    for (int i = 0; i <= nplane; i++) sum[i] = 0;

    for (int i = 1; i <= nplane; i++){
        cin >> tmp;

        if (!full) {
            if (tmp >= max) sum[tmp] = sum[max]+1, max = tmp;
            else sum[tmp]++, sum[max]++;
            maxsum++;
        }
        if (sum[max] > max or sum[tmp] > tmp) full = true;

    }
    if (full) cout << maxsum-1 << endl;
    else cout << nplane;
    return 0;
}
