#include<iostream>
using namespace std; 

int main() {
    // O(1) - Constant Time Complexity
    int n; 
    cin >> n; 
    int ans = n * (n+1)/2; 
    cout << ans << endl; 

    // O(n)  - Linear Time Complexity 
    // N Factorial 
    int fact = 1; 
    for (int i = 1; i<=n; i++) {
        fact *= i; 
    }
    cout << fact << endl; 
    


}