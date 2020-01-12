#include <iostream>
using namespace std;

int main() {
    char c;
    for (int k = 0; k < 10; k++) {
        int d, sh, res = 0;
        cin >> d >> sh;
        for (int i = 1; i <= sh; i++) {
            cin >> c;
            if (c == 'B'){
                if (!res or i > res) res = i + d-1;
                else if (i <= res) res = res + d;
            }
        }
        res -= sh;
        res < 0 ? cout << 0 << endl : cout << res << endl;
    }

    return 0;
}
