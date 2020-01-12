//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

bool visit[101][101];
char grid[101][101];
int dist[101][101];
queue <pair< int, int>> esc, q;

void explore(int a, int b, int c, int d){
    if (grid[a][b] != 'X' and grid [a][b] != 'W') {
        if (!visit[a][b] or (dist[a][b] - dist[c][d] > 1)) {
            visit[a][b] = true;
            dist[a][b] = dist[c][d] + 1;
            q.push(make_pair(a, b));
        }
    }
}

void conv(int a , int b){
    if (grid[a][b] == 'U'){
        if (grid[a-1][b] != 'W' and grid[a-1][b] != 'X'){
            if (!visit[a-1][b] or dist[a-1][b] - dist[a][b] > 0){
                visit[a-1][b] = true;
                dist[a-1][b] = dist[a][b];
                q.push(make_pair(a-1, b));
            }
        }
    }
    else if (grid[a][b] == 'D'){
        if (grid[a+1][b] != 'W' and grid[a+1][b] != 'X'){
            if (!visit[a+1][b] or dist[a+1][b] - dist[a][b] > 0){
                visit[a+1][b] = true;
                dist[a+1][b] = dist[a][b];
                q.push(make_pair(a+1, b));
            }
        }
    }
    if (grid[a][b] == 'R'){
        if (grid[a][b+1] != 'W' and grid[a][b+1] != 'X'){
            if (!visit[a][b+1] or dist[a][b+1] - dist[a][b] > 0){
                visit[a][b+1] = true;
                dist[a][b+1] = dist[a][b];
                q.push(make_pair(a, b+1));
            }
        }
    }
    if (grid[a][b] == 'L'){
        if (grid[a][b-1] != 'W' and grid[a][b-1] != 'X'){
            if (!visit[a][b-1] or dist[a][b-1] - dist[a][b] > 0){
                visit[a][b-1] = true;
                dist[a][b-1] = dist[a][b];
                q.push(make_pair(a, b-1));
            }
        }
    }
}

int main(){
    int h, w;
    cin >> h >> w;
    pair <int, int> s;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++){
            cin >> grid[i][j];
            visit[i][j] = false;
            dist[i][j] = -1;
            if (grid[i][j] == '.')
                esc.push(make_pair(i,j));
            if (grid[i][j] == 'S')
                s.first = i, s.second = j, grid[i][j] = '.';
        }
    }
    for (int i = 1; i < h-1; i++) {
        for (int j =1; j < w-1; j++) {
            if (grid[i][j] == 'C'){
                grid[i][j] = 'X';
                for (int k = i+1; grid[k][j] != 'W'; k++)
                    if (grid[k][j] == '.') grid[k][j] = 'X';

                for (int k = i-1; grid[k][j] != 'W'; k--)
                    if (grid[k][j] == '.') grid[k][j] = 'X';

                for (int k = j+1; grid[i][k] != 'W';k++)
                    if (grid[i][k] == '.') grid[i][k] = 'X';

                for (int k = j-1; grid[i][k] != 'W';k--)
                    if (grid[i][k] == '.') grid[i][k] = 'X';
            }
        }
    }

    visit[s.first][s.second] = true;
    dist[s.first][s.second] = 0;
    q.push(s);
    while (!q.empty())
    {
        pair<int, int> d = q.front();
        q.pop();

        if (grid[d.first][d.second] == '.'){
            explore(d.first+1, d.second, d.first, d.second);
            explore(d.first-1, d.second, d.first, d.second);
            explore(d.first, d.second+1, d.first, d.second);
            explore(d.first, d.second-1, d.first, d.second);
        }
        else if (grid[d.first][d.second] != 'W' and grid[d.first][d.second] != 'X'){
            conv(d.first, d.second);
        }
    }

    /*for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++){
            cout << grid[i][j] <<" ";
        }
        cout << endl;
    }*/

    while (!esc.empty()){
        if (grid[s.first][s.second]=='X')
            cout << -1 << endl;
        else cout << dist[esc.front().first][esc.front().second] << endl;
        esc.pop();
    }
    return 0;
}
