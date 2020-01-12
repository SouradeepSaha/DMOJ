#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {

    for (int kase = 0; kase < 10; kase++) {
        int num;
        cin >> num;
        string s;
        map <string, int> list;
        for (int i = 0; i < num; i++){
            cin >> s;
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            while (s.find('.') < s.find('@'))
                s.erase(s.find('.'), 1);
            if (s.find('+') < s.find('@')) s.erase(s.find('+'), s.find('@')-s.find('+'));
            list.insert({s, 0});
        }
        cout << list.size() << endl;
    }
    return 0;
}
