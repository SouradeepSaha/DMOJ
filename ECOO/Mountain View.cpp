#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {

    int num, j;
    for (int kase = 0; kase < 10; kase++) {
        cin >> num;
        int max = 0;
        vector <int> height(num), range(num);
        for (int i = 0; i < num; i++) cin >> height[i], range[i] = 0;
        for (int i = 0; i < num; i++) {
            double maxangright = (-0.5)*(M_PI), maxangleft = (-0.5)*(M_PI), curangle = 0.00;

            for (j = i-1; j >= 0; j--) { // for left mountains
                curangle = atan(double(height[j]-height[i])/double(i-j));
                if (curangle > maxangleft) maxangleft = curangle, range[i]++;
            }

            for (j = i+1; j < num; j++){// for right mountains
                curangle = atan((height[j]-height[i])/double(j-i));
                if (curangle > maxangright) maxangright = curangle, range[i]++;
            }

            if (range[i] > range[max]) max = i;
        }
        cout << max+1 << endl;
    }
    return 0;
}
