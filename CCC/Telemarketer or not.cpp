#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((b == c) and (a == 8 or a == 9) and (d == 8 or d==9)) cout << "ignore\n";
    else cout << "answer\n";
    return 0;
}
