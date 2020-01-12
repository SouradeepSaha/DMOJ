#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    for (int kase = 0; kase < 10; kase++) {
        int w;
        string s;
        cin >> w;
        getchar();
        getline(cin, s);

        for (int cur = 0, start = 0, space=0; cur <= s.length(); cur++){

            if (s[cur] == ' ') space = cur;
            if (cur+1-start == w and cur != s.length()) {
                if (s[cur+1] == ' ' or s[cur+1] == '\0' or s[cur] == ' ' or s[cur] == '\0'){
                    cout << s.substr(start, cur+1-start) << endl;
                    space = 0;
                    if (s[cur+1] == ' ') start = cur+2;
                    else start = cur+1;
                }
                else if (space and space > start){
                    cout << s.substr(start, space-start) << endl;
                    start = space+1;
                    space = 0;
                }
                else {
                    cout << s.substr(start, cur+1-start) << endl;
                    start = cur+1;
                }
            }
            else if (s[cur] == '\0' and cur!= start) cout << s.substr(start, cur-start) << endl;
        }

        cout << "=====\n";
    }
    return 0;
}
