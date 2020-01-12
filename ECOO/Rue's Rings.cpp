#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int kase = 0; kase < 10; kase++) {
        int n, min = 99999, tmp, id, ring;
        cin >> n;
        vector <int> pq[n+1];
        for (int i = 0; i < n; i++) {
            cin >> id >> ring;
            for (int j = 0; j < ring; j++) {
                cin >> tmp;
                pq[id].push_back(tmp);
                if (tmp < min) min = tmp;
            }
        }
        cout << min << " {";
        bool cod = false;
        for (int i = 1; i <= n; i++)
            if (find(pq[i].begin(), pq[i].end(), min) != pq[i].end()){
                if (cod) cout << ",";
                else cod = true;
                cout << i;
            }
        cout << "}\n";
    }
    return 0;
}
