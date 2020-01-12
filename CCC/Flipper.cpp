#include <iostream>
#include <string>

using namespace std;

int main(){
    int a=1, b=2, c=3, d=4, t;
    string str;
    cin >> str;
    //cout << str;
    for (int i=0; i!= str.length(); i++){
        if (str[i] == 'H'){
            t = a;
            a = c;
            c = t;
            t = b;
            b = d;
            d = t;
        }
        else if (str[i] == 'V'){
            t = a;
            a = b;
            b = t;
            t = c;
            c =d;
            d = t;
        }
    }
    cout << a <<" " << b << endl << c << " " << d << endl;
    return 0;
}
