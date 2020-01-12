#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    for (int kase = 0; kase < 10; kase++) {
        int num, maxt = 0;
        vector <int> bestot;
        cin >> num;
        string name[num], tmp;
        int tot[num], ins[num][3];
        for (int i = 0; i < num; i++) for (int j = 0; j < 3;j++) ins[i][j] = 0, tot[i] = 0;

        getchar();
        getline(cin, tmp);
        int i = -1;
        while (tmp != "*") {
            if (tmp[0] == 'J') {
                tot[i] = tot[i] + (tmp[2]-'0') + (tmp[4]-'0') + (tmp[6]-'0');
                if (tot[i] > maxt) maxt = tot[i];
                ins[i][0] += (tmp[2]-'0'), ins[i][1] += (tmp[4]-'0'), ins[i][2] += (tmp[6] - '0');
            }
            else i++, name[i] = tmp;
            getline(cin, tmp);
        }

        for (i = 0; i <num; i++) if (tot[i] == maxt) bestot.push_back(i);
        cout << endl;
        for (int r = 2; r >= 0; r--) {
            if (bestot.size() <= 1) break;
            for (i = 0; i < bestot.size(); i++) {
                for (int j = i+1; j < bestot.size(); j++) {
                    if (ins[bestot[i]][r] < ins[bestot[j]][r]) bestot.erase(bestot.begin()+i), j = i+1;
                    else if (ins[bestot[i]][r] > ins[bestot[j]][r]) bestot.erase(bestot.begin()+j);
                }
            }
        }
        bool cod = false;
        for (i = 0; i < bestot.size(); i++){
           if (cod) cout << ',';
           else cod = true;
           cout << name[bestot[i]];
        }
        cout << endl;
    }
    return 0;
}
