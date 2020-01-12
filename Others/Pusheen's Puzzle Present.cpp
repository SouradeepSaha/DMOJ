#include <iostream>
#include <vector>
#include <stack>
#include <tuple>
using namespace std;

int main() {
    int n, beg, end, flag = 0, cnt=1, count;
    cin >> n;
    end = n;
    int num[n+1][n+1], grid[n+1][n+1];
    for (int i = 0; i< n; i++){
        for (int j = 0; j < n; j++) cin >> num[i][j];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)grid[i][j] = cnt++;
    }
    for (int i =0; i < n;i++){
        for (int j = 0; j <n;j++){
            if (grid[i][j] != num[i][j])
                count++, flag =1;
        }
        if (flag) break;
    }
    cout << count << endl;
    return 0;
}
