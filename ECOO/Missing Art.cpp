#include <bits/stdc++.h>
using namespace std;

int main() {

    int num, x, y, z;
    char ch;
    queue<int> q;
    for (int kase = 0; kase < 10; kase++) {
        cin >> num >> x >> y >> z;
        vector <string> lst(num), ans(num), res(num);

        for (int i = 0; i < num; i++) cin >> lst[i];
        cin >> ch;
        for (int i = 0; i < num; i++) cin >> ans[i];
        cin >> ch;

        for (int i = 0; i < num; i++) {
            for (int j = lst[i].length()-1; j >= 0; j--) {
                if (lst[i][j] == '0') res[i] = to_string(z) + res[i];
                else if ((lst[i][j] - '0')%2) {
                    int result = ((lst[i][j] - '0')>y)?(lst[i][j]-'0')- y:0;
                    res[i]= to_string(result) + res[i];
                }
                else res[i] = to_string((lst[i][j] - '0')+x) + res[i];
            }
            if (res[i] != ans[i]) q.push(i+1);
        }
        if (q.empty()) cout << "MATCH\n";
        else {
            cout << "FAIL: ";
            while (!q.empty()) {
                cout << q.front();
                q.pop();
                if (q.size()) cout << ',';
            }
        }
        cout << "\n";
    }
    return 0;
}
