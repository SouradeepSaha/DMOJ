//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(){

    int kase, in, max = 0, count = 0 ;
    vector <int> cnt(4002), len(4002);
    for (int i = 0; i < 4002;i++) cnt[i] = 0, len[i] = 0;
    cin >> kase;
    for (int i = 0; i < kase; i++){
        cin >> in;
        cnt[in]++;
        if (in > max) max = in;
    }
    for (int i = 2; i <= max*2; i++){
        vector<int> tmp = cnt;
        for (int j = 1; j <= i/2; j++){
            if (tmp[j] and tmp[i-j]){
                if (i-j != j){
                    len[i] += min(tmp[j], tmp[i-j]);
                    tmp[i-j] -= min(tmp[j], tmp[i-j]);
                    tmp[j] -= min(tmp[j], tmp[i-j]);
                }
                else if (tmp[j] > 1)
                {
                    len[i] += tmp[j]/2;
                    tmp[j] /= 2;
                }
            }
        }
    }
    //for (int i = 0; i < max*2; i++) cout << len[i] << endl;
    sort(len.rbegin(), len.rend());
    for (int i = 0; len[i] == len[0]; i++) count++;

    cout << len[0] << " " << count << endl;
    return 0;
}
