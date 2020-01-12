#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int kase, num;
    bool flag[2000005];
    for (int i = 2; i < 2000005; i++) flag[i] = true;
    for (int i = 2; i <= sqrt(2000005); i++){
        for (int j = 2*i; j < 2000005; j+= i) flag[j] = false;
    }
    cin >> kase;
    for (int i = 0; i < kase; i++){
        cin >> num;
        for (int j = 2; j <= num; j++){
            if (flag[j] and flag[num*2-j]){
                cout << j << " " << num*2-j << endl;
                break;
            }
        }
    };
    return 0;
}
