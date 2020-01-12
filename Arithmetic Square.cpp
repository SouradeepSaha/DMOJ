#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int arr[3][3];
bool isx[3][3];

// #define rep(i,a,n) for (int i = a; i < n; i++)

void fill () {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (isx[i][j]) {
                if (!j and !isx[i][j+1] and !isx[i][j+2]) arr[i][j] = (arr[i][j+1] * 2) - arr[i][j+2], isx[i][j] = false;
                else if (j == 1 and !isx[i][j-1] and !isx[i][j+1]) arr[i][j] = (arr[i][j-1] + arr[i][j+1]) / 2, isx[i][j] = false;
                else if (j == 2 and !isx[i][j-1] and !isx[i][j-2]) arr[i][j] = (arr[i][j-1] * 2) - arr[i][j-2], isx[i][j] = false;

                if (!i and !isx[i+1][j] and !isx[i+2][j]) arr[i][j] = (arr[i+1][j] * 2) - arr[i+2][j], isx[i][j] = false;
                else if (i == 1 and !isx[i-1][j] and !isx[i+1][j]) arr[i][j] = (arr[i-1][j] + arr[i+1][j]) / 2, isx[i][j] = false;
                else if (i == 2 and !isx[i-1][j] and !isx[i-2][j]) arr[i][j] = (arr[i-1][j] * 2) - arr[i-2][j], isx[i][j] = false;
            }
        }
    }
}

int main() {
    string s;
    int side = 0, mid = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> s;
            if (s == "X") isx[i][j] = true;
            else arr[i][j] = stoi(s), isx[i][j] = false;

            if(!isx[i][j]) {
                if ((i+j == 2 or i+j ==4 or i+j==0) and i != 1) side = arr[i][j];
                else if (i+j == 1 or i+j == 3 or (i+j == 2 and i == j)) mid = arr[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            fill();
            if (isx[i][j]){
                if (/*i+j == 1 or i+j == 3 or */(i+j == 2 and i == j)) arr[i][j] = mid, isx[i][j] = false;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            fill();
            if (isx[i][j]){
                if (i+j == 0 or i+j == 4 or (i+j ==2 and i != 1)) arr[i][j] = side, isx[i][j] = false;
            }
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}
