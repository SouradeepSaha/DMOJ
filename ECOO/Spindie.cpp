#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    for (int kase = 0; kase < 10; kase++) {
        int N, target[5];
        cin >> N;
        vector <int> choice(N);
        vector<bool> div(1000000);
        for (int i = 0; i < N;i++) cin >> choice[i];
        for (int i = 0; i < 5;i++) cin >> target[i];

        //for (int i = 0; i < 10000; i++) div[i] = false, su[i]=  false;
        for (int i = 0; i < N; i++) {
            for (int j = i; j < N; j++) {
                div[choice[i] * choice[j]] = true;
                div[choice[i] + choice[j]] = true;
            }
        }

        for (int i = 0; i < 5; i++) {
            bool st = false;
            for (int j = 0; j < N; j++) {
                if (!(target[i]%choice[j]) and (div[target[i] / choice[j]])) {
                    st = true;
                    break;
                }
                else if (target[i] > choice[j] and div[target[i]-choice[j]]) {
                    st = true;
                    break;
                }
            }
            if (st) cout << 'T';
            else cout << 'F';
        }
        cout << endl;
    }
    return 0;
}
