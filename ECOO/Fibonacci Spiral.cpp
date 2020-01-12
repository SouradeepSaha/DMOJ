#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<pair<long,long>> grid[10001];
    vector<long> fib(10001);
    pair<long,long> tr={1,0}, dr={1,-1}, tl={-1,0}, dl={-1,-1};
    fib[1] = 1, fib[2] = 1;
    grid[1].push_back({0,1}), grid[1].push_back({-1, 0});
    grid[2].push_back({-1,0}), grid[2].push_back({-1,0});

    for (int i = 3; i <= 10000; i++){
        fib[i] = fib[i-1] + fib[i-2];
        if (i%4 == 1){
            grid[i].push_back({dl.first, dr.first});
            grid[i].push_back({dl.second - fib[i], dl.second});
            dl.second -= fib[i], dr.second -= fib[i];
        }
        else if (i%4 == 2) {
            grid[i].push_back({tl.first-fib[i], tl.first});
            grid[i].push_back({dl.second, tl.second});
            tl.first -= fib[i], dl.first -= fib[i];

        }
        else if (i%4 == 3) {
            grid[i].push_back({tl.first, tr.first});
            grid[i].push_back({tl.second, tl.second+fib[i]});
            tl.second += fib[i], tr.second += fib[i];
        }
        else {
            grid[i].push_back({tr.first, tr.first+fib[i]});
            grid[i].push_back({dr.second, tr.second});
            tr.first += fib[i], dr.first += fib[i];
        }
    }

    for (int kase = 0; kase < 10; kase++) {
        long x, y;
        cin >> x >> y;
        for (int i = 1; i <= 10000; i++) {
            if (x >= grid[i][0].first and x <= grid[i][0].second and y >= grid[i][1].first and y <= grid[i][1].second) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
