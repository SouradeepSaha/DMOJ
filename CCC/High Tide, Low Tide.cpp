#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main() {
    //ios::sync_with_stdio(0);
    //cin.tie(0);

    int kase = 100;
    cin >> kase;
    vector <int> tide(100);
    for (int i = 0; i < kase; i++)
        cin >> tide[i];

    for (int i = kase-1; i >= 0; i-= 2)
    {
        //int max = *max_element(tide.begin(), tide.begin()+i+1);
        //int min = *min_element(tide.begin(), tide.begin()+i+1);
        if (!(kase%2)) {
            iter_swap(tide.begin() + i - 1, min_element(tide.begin(), tide.begin() + i + 1));
            iter_swap(tide.begin() + i, max_element(tide.begin(), tide.begin() + i + 1));
        }
        else {
            iter_swap(tide.begin() + i, min_element(tide.begin(), tide.begin() + i + 1));
            if (i != 0)
                iter_swap(tide.begin() + i-1, max_element(tide.begin(), tide.begin() + i + 1));
        }
    }
    for (int i = 0; i < kase; i++) {
        cout << tide[i] << " ";
    }
    return 0;
}
