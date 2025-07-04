#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X; 

        vector<int> ages(N);
        int count = 0;

        for (int i = 0; i < N; ++i) {
            cin >> ages[i];
            if (ages[i] >= X) {
                count++; 
            }
        }

        cout << count << endl; 
    }

    return 0;
}
