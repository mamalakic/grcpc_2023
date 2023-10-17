// https://ncduy0303.github.io/Competitive-Programming/
// https://gist.github.com/Neilblaze/dcf6113fa5e63fc938502f1d742365c4

#include <iostream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define FILE_INPUT false

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

typedef struct {
    char name;
    float x;
    float y;
} Point;
vector<Point> v;

int main()
{
    // \n INSTEAD OF endl -> MUCH FASTER 
    ios::sync_with_stdio(0);
    //cin.tie(0);


	#if FILE_INPUT
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #else
    int t, n, b;
    cin >> t;
    cin >> n >> b;
    int a[n];
    for (int i=0; i<n; ++i) {
        cin >> a[i];
    }
    sort (a, a+n); //stdc++.h
    /* //else
    while (std::getline(std::cin, line)) {
        char character;
        double num1, num2;
        
        // Create a stringstream to split the line into parts
        std::istringstream iss(line);
        
        // Read the character followed by two floating-point numbers
        iss >> character >> num1 >> num2;
        
        if (iss.fail()) {
            std::cerr << "Failed to parse the line: " << line << std::endl;
            continue; // Move to the next line
        }
     */
    //    for (auto& point: v) {
    /*
        for (int i = 0; i < n; ++i) {
        std::cin >> character >> flexibility >> conductivity;
        v.push_back({.name = character, .x = flexibility, .y = conductivity})
        interestedAlloys.push_back(character);
    }
    */

    #endif

    return 0;
}