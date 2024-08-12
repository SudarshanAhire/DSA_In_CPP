#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int stalls[], int n, int k, int mid) {

    int cowCount = 1;
    int lastPos = stalls[0];

    for(int i = 1; i < n; i++) {  // Start from index 1
        if(stalls[i] - lastPos >= mid) {
            cowCount++;
            if(cowCount == k) {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(int stalls[], int n, int k) {

    sort(stalls, stalls + n);  // Sort the array

    int s = 0;
    int maxi = stalls[n-1];
    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while(s <= e) {
        if(isPossible(stalls, n, k, mid)) {  // Correct array name and parameters
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {

    int stalls[8] = {1, 2, 3, 4, 6, 7, 8, 9};
    int n = sizeof(stalls) / sizeof(stalls[0]);
    int k = 2;  // Number of cows

    cout <<"Largest minimum distance: " << aggressiveCows(stalls, n, k) << endl;

    return 0;
}













