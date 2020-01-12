#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int step;
string ini, final;
vector <pair<string, string>> rule(3);
bool codes = false;
stack <pair<int, int>> ones;
stack <string> two;
int cnt[3] = {16, 16, 16};

int freq (string s, char c) {
    int sum=0;
    for (int i = 0; i < s.length(); i++) if (s[i] == c) sum++;
    return sum;
}

void calc(string cur, int k, int l, int kase){
    kase++;
    if (kase == step+1){
        if (cur == final){
            codes = true;
            two.push(cur);
            ones.push({k,l+1});
        }
        return;
    }
    for (int k = 0; k < 3; k++){
        int M = rule[k].first.length(), N = cur.length();
        for (int l = 0; l <= (N-M); l++) {
            int p = cur.find(rule[k].first, l);
            if (p != string::npos and cnt[k]){
                string tem = cur;
                tem.replace(p, M, rule[k].second);
                cnt[k]--;
                calc(tem, k + 1, p + 1, kase);
                cnt[k]++;
            }
            if (codes) {
                two.push(cur);
                ones.push({k+1,p+1});
                return;
            }
        }
    }
}

int main() {

    for (int i = 0; i < 3; i++)
        cin >> rule[i].first >> rule[i].second;
    cin >> step >> ini >> final;
    if (step >= 5) {
        int a, b, c, d, e, f, g, h, i = step;
        a = freq(rule[0].second, 'A') - freq(rule[0].first, 'A');
        e = freq(rule[0].second, 'B') - freq(rule[0].first, 'B');
        b = freq(rule[1].second, 'A') - freq(rule[1].first, 'A');
        f = freq(rule[1].second, 'B') - freq(rule[1].first, 'B');
        c = freq(rule[2].second, 'A') - freq(rule[2].first, 'A');
        g = freq(rule[2].second, 'B') - freq(rule[2].first, 'B');
        d = freq(final, 'A') - freq(ini, 'A');
        h = freq(final, 'B') - freq(ini, 'B');
        cnt[2] = (-(b*h) +(b*e*i) + (a*h) + (d*f) - (d*e) - (a*i*f))/(b*e - (b*g) + (a*g) - (f*a) + (f*c) - (e*c));
        cnt[1] = (h-(e*i)+(e*cnt[2])-(g*cnt[2]))/(f-e);
        cnt[0] = i - cnt[1] - cnt[2];
    }
    calc(ini, 0, 0, 0);
    while (!two.empty()){
        if (two.size() <= step){
            cout << ones.top().first << " " << ones.top().second << " ";
            cout << two.top() << endl;
            ones.pop();
        }
        two.pop();
    }
    return 0;
}
