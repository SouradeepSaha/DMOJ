#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;


int main() {
    
    long double min = 1000000000.0, subtract;
    long long int kase, i;
    cin >> kase;
    vector<long long int> dist(kase);
    vector<double> diff(kase-1);
    for (i =0; i <= kase-1; i++)
        cin >> dist[i];
    
    sort(dist.begin(), dist.end());
    
    for (i = 0; i <= kase-2; i++)
        diff[i] = ((dist[i+1] - dist[i]) / 2.0) + dist[i];
    
    for (i = 0; i <= kase-3; i++){
        subtract = diff[i+1] - diff[i];
        if (min > subtract)
            min = subtract;
    }
    
    printf("%.1Lf", min);
    return 0;
}
