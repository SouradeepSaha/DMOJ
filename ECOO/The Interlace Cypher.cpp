#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    for (int kase = 0; kase < 10; kase++) {
        int max = 0;
        string com, s, ans;
        cin >> com;
        vector<string> line;
        getchar();
        getline(cin, s);
        for(int i = 0, j = 0; i <= s.length(); i++) { // splitting the sentence into words
            if (s[i] == ' ' or s[i] == '\0'){
                string ar = s.substr(j,i-j);
                line.push_back(ar), j = i+1;
                if (ar.length() > max) max = ar.length();// ignoring the space character
            }
        }

        if (com == "encode") {
           for (int j = 0; j < max; j++) {
               for (int i = 0; i < line.size(); i++)
                    if (j < line[i].length()) ans += line[i][j];
           }
           for (int i = 0, j = line[0].length(); i < line.size(); i++, j += line[i].length()+1) ans.insert(j, " ");
           cout << ans << endl;
        }
        else {
            string ans2[line.size()];
            for (int i = 0, j = 0; i < s.size(); i++) {

                if (s[i] != ' ') {
                    if (line[j].length() > ans2[j].length())
                        ans2[j] += s[i];
                    else i--;
                    j++;
                }
                if (j == line.size()) j = 0;

            }
            for (int i = 0; i < line.size(); i++) cout << ans2[i] << " ";
            cout << endl;
        }
    }
    return 0;
}
