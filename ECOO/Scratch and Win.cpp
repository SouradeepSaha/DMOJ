#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> value = {1, 2, 5, 10, 50, 100, 1000, 10000, 500000, 1000000};
    for (int kase = 0; kase < 10; kase++) {
        vector<int> all, two, three;
        int card[10], mis=0;
        string s;
        for (int i = 0; i < 10; i++) card[i]=0;
        for (int i = 0; i < 9; i++){
            cin >> s;
            if (s!= "?") {
                s.erase(0,1);
                int it = (find(value.begin(), value.end(), stoi(s)))-value.begin();
                card[it]++;//
            }
            else mis++;
        }
        for (int i = 0; i < 10; i++) {
            if (card[i] == 1 or card[i] == 2) all.push_back(value[i]);
            if (card[i] == 2) two.push_back(value[i]);
            if (card[i] == 3) three.push_back(value[i]);
        }

        if (!three.empty()) cout << '$' << three[0];
        else if (mis >= 3) for (int i = 0; i < 10; i++) cout << '$' << value[i] << " ";
        else if (mis == 2) for (int i = 0; i < all.size(); i++) cout << '$' << all[i] << " ";
        else if (mis == 1){
            if (!two.empty()) for (int i = 0; i < two.size(); i++) cout << '$' << two[i] << " ";
            else cout << "No Prizes Possible";
        }
        else cout << "No Prizes Possible";
        cout << endl;
    }
    return 0;
}
