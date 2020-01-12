#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int findmax(int a, int b){
    return a>b?a:b;
}

int main() {
  
    int kase, tl, tr, bl, br;
    cin >> kase;
    int height[kase][kase];
    
    for (int i = 0; i < kase; i++)
    {
        for (int j = 0; j < kase; j++)
            cin >> height[i][j];
    }
    
    tl = height[0][0];
    tr = height[0][kase-1];
    bl = height[kase-1][0];
    br = height[kase-1][kase-1];
    int max = findmax(findmax(tl,tr),findmax(bl,br));
    
    /*for (int i = 0; i < kase; i++) {
      for (int j = 0; j< kase; j++) {
        cout << height[i][j] << " ";
      }
      cout << endl;
    }
   cout << endl;*/

    if (tl == max)
    {
      for (int i = kase-1; i >= 0; i--)
      {
        for (int j = kase-1; j >= 0; j--)
          cout << height[i][j] << " ";
        cout << endl;
      }
    }
    
    else if (tr == max)
    {
      for (int i = 0; i < kase; i++)
      {
        for (int j = kase-1; j >= 0; j--)
          cout << height[j][i] << " ";
         cout << endl;
      }
    }
    
    else if (bl == max)
    {
      for (int j = kase-1; j >= 0; j--)
      {
        for (int i = 0; i < kase; i++)
            cout << height[i][j] << " ";
        cout << endl;
      }
    }
    
    else
    {
      for (int i = 0; i < kase; i++) {
        for (int j = 0; j< kase; j++) 
          cout << height[i][j] << " ";
        cout << endl;
      } 
    }
    
    return 0;
}
