#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
//#include <bits/stdc++.h>

using namespace std;

int size (char c)
{
    if (c == 'S')
        return 10;
    else if (c == 'M')
        return 20;
    else
        return 30;
}

int main() {

    int njer, nplayer, count = 0;
    char c;
    cin >> njer >> nplayer;
    vector <pair<int, int>> jersey(njer), player(nplayer);
    vector<bool> done(nplayer);
    for (int i = 0; i < njer; i++){
        cin >> c;
        jersey[i].first = size(c);
        jersey[i].second = i;
    }
    for (int i = 0; i < nplayer; i++){
        cin >>c >> player[i].second;
        player[i].first = size(c);
        player[i].second--;
    }

    for (int i = 0; i < nplayer; i++){
        if (!done[player[i].second] and (jersey[player[i].second].first >= player[i].first))
            count++, done[player[i].second] = true;
    }
    cout << count << endl;
    return 0;
}
