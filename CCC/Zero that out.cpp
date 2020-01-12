#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int sum = 0, kase, temp;
    stack <int> s;
    cin >> kase;
    for (int i = 0; i<kase; i++)
    {
      cin >> temp;
      if (!temp){
        sum-= s.top();
        s.pop();  
      }      
      else{
        sum += temp;
        s.push(temp);
      }
    }
    cout << sum;
    return 0;
}
