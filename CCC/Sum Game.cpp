#include <bits/stdc++.h>
using namespace std;

int main() {
  //ios::sync_with_stdio(0);
  //cin.tie(0);
  
  int kase=100000, diff = 0, ans = 0;
  int swift[kase], sema[kase];
  cin >> kase;
  for (int i = 0; i < kase; i++)
    cin >> swift[i];
  for (int i = 0; i < kase; i++)
    cin >> sema[i];
    
  for (int i = 0; i < kase; i++)
  {
    
    diff += swift[i] - sema[i];
    if (diff == 0)
      ans = i+1;
  }
  if (!ans)
    cout<<"0" << endl;
  else
    cout<<ans<<endl;
  return 0;
}
