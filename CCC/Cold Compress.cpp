#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int kase;
    cin >> kase;
    string s;
    char c;
    for (int i = 0; i < kase; i++){
        cin >> s;
        int count =1;
        for (int j = 0;j <s.length() ; j++){
            c = s[j];
            if (s[j] == s[j+1]){
                count++;
            }
            else if (s[j] != s[j+1] or j==s.length()){
                cout << count << " " << c << " ";
                count = 1;
            }
        }
        cout << endl;
    }
    return 0;
}
