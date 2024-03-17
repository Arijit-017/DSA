#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int distinctElements(int N, int K, vector<int>& A) {
    set<int> distinctValues;
    
    for (int i = 0; i < N; i++) {
        distinctValues.insert(A[i]);
    }
    
    for (int i = 0; i < N; i++) {
        if (distinctValues.find(A[i] + K) == distinctValues.end() &&
            distinctValues.find(A[i] - K) == distinctValues.end()) {
            distinctValues.erase(A[i]);
        }
    }
    
    return distinctValues.size();
}

int main() {
    int N = 6;
    int K = 2;
    vector<int> A = {2, 4, 3, 2, 2, 1};
    int result = distinctElements(N, K, A);
    cout << result << endl;  // Output: 6
    
    return 0;
}
