/*
"Putting/Taking" hints to stack.
*/

#include <iostream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>

using namespace std;
int main()

{
    ios::sync_with_stdio(0);

    int n;
    vector<char> stack;
    cin >> n;

    if (n%2!=0) {
        cout << 0;
        return 0;
    }

    char elem;
    for (int i=0; i<n; ++i) {
        cin >> elem;

        //push
        if (elem>='a' && elem<='z') {
            stack.push_back(elem);
        }

        //pop
        else if (elem>='A' && elem<='Z') {
            if (stack.empty()) {
                cout << 0;
                return 0;
            }
            
            else if (stack[stack.size()-1] == elem - ('A' - 'a')) {
                stack.pop_back();
            }

            else {
                cout << 0;
                return 0;
            }
        }

        else {
            cout << 0;
            return 0;
        }
    }
    cout << 1;

    return 0;
}

/*
Input:
8
DdaacCAA
0

14
aabcdDCBdDAbBA
1
*/