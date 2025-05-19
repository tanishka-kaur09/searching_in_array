#include <iostream>
#include <climits>
using namespace std;


int BAD = 4;
bool isBadVersion(int version) {
    return version >= BAD;
}

int firstBadVersion(int n) {
    int start = 1, end = n, ans = INT_MAX;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isBadVersion(mid)) {
            end = mid - 1;
            ans = min(ans, mid);
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n = 10;
    cout << "First bad version: " << firstBadVersion(n) << endl;
    return 0;
}
