#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int cur, take = 0, serve = 0, next = 0;
    cin >> cur;
    next = cur;
    string what;
    cin >> what;
    while (what != "EOF") {
        if (what == "CLOSE"){
            cout << take << " " << take - serve << " " << next << endl;
            take = 0, serve = 0;
        }
        else if (what == "TAKE") take++, next++;
        else if (what == "SERVE") serve++;
        //next += take;
        if (next > 999) next = 1;
        cin >> what;
    }
    return 0;
}
