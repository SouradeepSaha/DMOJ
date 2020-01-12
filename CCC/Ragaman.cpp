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

    bool an = true, wc = false;
    string in1, in2;
    cin >> in1 >> in2;
    multiset <char> set1, set2;
    for (int i = 0; i <in1.length();i++)
        set1.insert(in1[i]);
    for (int i = 0; i <in2.length();i++){
        if (in2[i]!= '*')
            set2.insert(in2[i]);
    }
    for (multiset<char>::iterator i = set2.begin(); i != set2.end(); i++){
        char sa = *i;
        if (set1.count(sa)<set2.count(sa))
            an = false;
    }
     if (an && (in2.length()==in1.length()))
         cout << "A\n";
     else
         cout << "N\n";
    return 0;
}
