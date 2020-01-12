#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a, b, c, d, e, f, A, B;
    cin >> a >> b >> c >> d >> e >> f;
    A = a*3+b*2+c;
    B = d*3+e*2+f;
    if (A > B) cout << "A\n";
    else if (A < B) cout << "B\n";
    else cout << "T\n";
    return 0;
}
