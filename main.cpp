#include <cstdio>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int target = n - m;  // apples remaining when we've eaten m apples
    
    // E[k] = expected days from k apples to reach target
    vector<double> E(n + 1, 0.0);
    
    E[target] = 0.0;  // base case
    
    // Maintain running sum of E[target..k-1]
    double running_sum = 0.0;
    
    for (int k = target + 1; k <= n; k++) {
        if (k == target + 1) {
            running_sum = E[target];
        } else {
            running_sum += E[k - 1];
        }
        
        E[k] = 1.0 + running_sum / k;
    }
    
    printf("%.2f\n", E[n]);
    
    return 0;
}