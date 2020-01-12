#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int dis[4], h[5], v[5];
    h[0] = 0, v[0] = 0;
    for (int i = 0; i < 4; i++) cin >> dis[i];
    for (int i = 1; i < 5; i++)
        h[i] = h[i-1] + dis[i-1], v[i] = h[i];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cout << abs(h[i]-v[j]) << " ";
        cout << endl;
    }
    return 0;
}
