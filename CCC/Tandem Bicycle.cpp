#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
//include <bits/stdc++.h>
#include <set>

using namespace std;

int main() {
    //ios::sync_with_stdio(0);
    //cin.tie(0);

    int q, num, sum=0, temp;
    cin >> q >> num;
    vector <int > d, p;
    for (int i = 0; i < num; i++){
        cin >> temp;
        d.push_back(temp);
    }

    for (int i = 0; i < num; i++){
        cin >> temp;
        p.push_back(temp);
    }
    sort(d.begin(), d.end());
    /*sort(p.rbegin(), p.rend());
    for (int i = 0; i < num; i++)
        cout << d[i] << " ";
    cout << endl;
    for (int i = 0; i < num; i++)
        cout << p[i] << " ";*/

    if (q == 1)
    {
        sort(p.begin(), p.end());
        for (int i =0; i < num; i++)
            sum += max(p[i], d[i]);
    }
    else if (q==2)
    {
        sort(p.rbegin(), p.rend());
        for (int i = 0; i < num;i++)
            sum+= max(p[i],d[i]);
    }
    /*for (int i = 0; i < num; i++)
        cout << d[i] << "";
    cout << endl;
    for (int i = 0; i < num; i++)
        cout << p[i] << " ";*/
    cout << sum << endl;
    return 0;
}
