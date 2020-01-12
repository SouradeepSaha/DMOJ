#include <iostream>
using namespace std;

int main() {
    for (int kase = 0; kase < 10; kase++){
        int jump, w, h, s, e, curj;
        cin >> jump >> w >> h;
        char grid[h][w];
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> grid[i][j];
                if (grid[i][j] == 'L') s = j;
                else if (grid[i][j] == 'G') e = j;
            }
        }
        bool code = false;
        for (curj = s+1; curj < e; curj++){
            if (grid[h-2][curj] == '@'){
                int temp = jump;
                for (int i = 1; i <= jump; i++)
                    if (grid[h-2-i][curj] == '.'){temp = i; break;}
                for (int i = 0; i <= temp; i++)
                    if (temp >= h-1 or grid[h-2-i][curj-1] == '@' or grid[h-2-i][curj+1] == '@') { code = true; break;}
                if (grid[h-2-temp][curj]== '@') {code = true; break;}
            }
            if (code) break;
        }
        if (curj == e and !code) cout << "CLEAR\n";
        else cout << curj+1 << endl;
    }
    return 0;
}
