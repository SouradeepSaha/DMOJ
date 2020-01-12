// Always Check limits to the input, use long long instead of int here
#include <iostream>
#include <vector>
using namespace std;

int main() {
    for (int kase = 0; kase < 10; kase++) {
        int rule, rep, c1, c2;
        vector <unsigned long long> cnt(27), add(27);
        for (int i = 0; i < 27; i++) cnt[i] = 0.0, add[i]=0.0;
        string ax;
        char s,f;
        cin >> rule >> rep >> ax;
        vector <pair<char, string>> data(rule);
        s = ax[0], f = ax[ax.length()-1];
        for (int i = 0; i < rule; i++) cin >> data[i].first >> data[i].second;
        for (int i = 0; i < ax.length(); i++)cnt[ax[i]-'A']++;
        for (int i = 0; i < rep; i++) {
            c1 = 1, c2 = 1;
            for (int j = 0; j < rule; j++) {
                if (s == data[j].first and c1) s = data[j].second[0], c1 = 0;
                if (f == data[j].first and c2) f = data[j].second[data[j].second.length()-1], c2 = 0;
                unsigned long long mul = cnt[data[j].first-'A'];
                cnt[data[j].first-'A']-= mul;
                for (int k = 0; k != data[j].second.length(); k++)
                    add[data[j].second[k]-'A']+= mul;
            }
            for (int j = 0; j < 27; j++) cnt[j] += add[j], add[j]=0;
        }
        unsigned long long sum = 0;
        for (int i = 0; i < 27; i++) sum+= cnt[i];
        cout << s << f << " " << sum << endl;
    }
    return 0;
}
