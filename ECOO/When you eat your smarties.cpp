#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    for (int k = 0; k < 10; k++) {
        int res = 0, num[8] = {0,0,0,0,0,0,0,0};
        string col;
        getline(cin, col);
        while (col != "end of box") {
            if (col == "orange") num[0]++;
            else if (col == "blue") num[1]++;
            else if (col == "green") num[2]++;
            else if (col == "yellow") num[3]++;
            else if (col == "pink") num[4]++;
            else if (col == "violet") num[5]++;
            else if (col == "brown") num[6]++;
            else num[7]++;
            getline(cin, col);
        }
        for (int i = 0; i < 7; i++) res += ceil(num[i]/7.0) * 13;
        res += 16 * num[7];
        cout << res << endl;

    }
    return 0;
}
