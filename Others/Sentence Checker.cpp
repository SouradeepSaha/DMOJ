#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int n;
    set<string>dict;
    string input, sent = "";
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> input;
        dict.insert(input);
    }
    getchar();
    while (getline(cin, input))
        sent += input + ' ';
    
    string ans = "Correct\n";
    int start_ind=0;
    for (int i = 0; i < sent.length(); i++) {
        if(sent[i] == ' ' and i and sent[i-1] != ' '){
            if(dict.count(sent.substr(start_ind, i-start_ind)) == 0) {
                ans="Incorrect\n";
                break;
            }
        }
        else if (sent[i] != ' ' and i and sent[i-1] == ' ')
            start_ind = i;
    }
    cout << ans;
    return 0;
}
