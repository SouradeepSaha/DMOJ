#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int kase, n;
    char c;
    cin >> kase;
    for (int i =0; i < kase; i++){
        cin >> n >> c;
        for (int j = 0; j < n; j++) cout << c;
        cout << endl;
    }
    return 0;
}
