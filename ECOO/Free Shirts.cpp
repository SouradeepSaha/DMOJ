// Read questions carefully - there could be multiple events in the same day.
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    for (int k = 0; k < 10; k++) {
        int n, m, d, test, sum = 0;
        cin >> n >> m >> d;
        int chek[d+2];
        for (int i = 0; i <= d; i++) chek[i] = 0;
        for (int i = 0; i < m; i++){
            cin >> test;
            chek[test]++;
        }
        for (int i = 1, s = n; i <= d; i++) {
            if (!s){
                sum++;
                s = n;
            }
            if (chek[i]) n+= chek[i], s+= chek[i];
            s--;
        }
        cout << sum << endl;
    }
    return 0;
}
