#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> results;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        if (n == 1 || m == 1) {
            results.push_back("no");
        }
        else{
            int x = n / m;
            if(n%m !=0)
            {
                x++;
            }
            int q = n - x;
            if (k >= q) {
                results.push_back("no");
            }
            else {
                results.push_back("yes");
            }
        }
    }
    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
