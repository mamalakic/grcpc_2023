/*
Teammate's solution: Sort req and completed and then merge-sort them. (idea from teammate)
Wrong for courses with equal ascii values.
*/

#include <iostream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>

using namespace std;
typedef struct {
    string key;
    int value;
} course;

bool compareValues(course a, course b) {
    if (a.value == b.value)
        return a.key < b.key;
    else
        return a.value < b.value;
}

int main()
{
    ios::sync_with_stdio(1);

    int n;
    cin >> n;

    string courseName;
    string courseCode;
    vector<course> completedCourses;
    vector<course> reqCourses;

    for (int i=0; i<n; i++) {
        cin >> courseName;
        //courseName.erase(0,6);

        int sum=0;
        for (char c : courseName) {
            sum += (int)c;
        }

        string s = courseName;
        completedCourses.push_back({.key = s, .value = sum});
    }

    sort(completedCourses.begin(),completedCourses.end(), compareValues);

    int m;
    cin >> m;

    for (int i=0; i<m; i++) {
        cin >> courseName;

        int sum=0;
        for (char c : courseName) {
            sum += (int)c;
        }

        string s = courseName;
        reqCourses.push_back({.key = s, .value = sum});
    }

    sort(reqCourses.begin(),reqCourses.end(), compareValues);

    for(int i=0; i<m+n; i++) {
        if (!reqCourses.size()) {
            break;
        }

        else if (!completedCourses.size()) {
            cout << 0;
            return 0;
        }


        if (completedCourses.back().value > reqCourses.back().value) {
            completedCourses.pop_back();
        }

        // not found
        else if (completedCourses.back().value < reqCourses.back().value) {
            cout << 0;
            return 0;
        }

        // found
        else {
            if (completedCourses.back().key == reqCourses.back().key) {
                completedCourses.pop_back();
                reqCourses.pop_back();
            }

            else {
                completedCourses.pop_back();
            }

        }
    }

    cout << 1;
    return 0;
}
/*
5
CourseA CourseB CourseC CourseD CourseE
2
CourseC CourseD

6
CourseA CourseB CourseD CourseE CourseO CourseI
4
CourseD CourseE CourseO CourseG

5
CourseA CourseB CourseC CourseD Course--
3
CourseC CourseD CourseZ
*/