/*
Value of water in each index is calculated by finding the height of the peaks that create this "valley"
The water is as tall as the smallest peak
*/

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; ++i) {
        cin >> a[i];
    }

    int heightSum;
    for (int current=1; current<n-1; current++) {
        int leftBound=current-1, rightBound=current+1;

        //cant form puddle
        if (a[leftBound]==0 || a[current]==0 || a[rightBound]==0)
            continue;

        for (int leftScan=current-1; leftScan>=0; leftScan--) {
            //0 = stop
            if (a[leftScan]==0) {
                break;
            }

            if (a[leftScan] > a[leftBound]) {
                leftBound = leftScan;
            }
        }

        for (int rightScan=current+1; rightScan<n; rightScan++) {
            //0 = stop
            if (a[rightScan]==0) {
                break;
            }

            if (a[rightScan] > a[rightBound]) {
                rightBound = rightScan;
            }
        }

        if (a[leftBound] < a[current] || a[rightBound] < a[current])
            continue;
        
        else
            heightSum += min(a[leftBound], a[rightBound]) - a[current]; 
    }

    cout << heightSum;

    return 0;
}

/*
Input:
11
3 0 6 1 2 8 6 7 3 1 2
Output:
11
*/