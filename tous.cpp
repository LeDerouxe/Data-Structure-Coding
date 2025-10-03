
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 5;
const ll Mod = 1e9 + 7;
vector<ll> v;
ll a[N];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //
    stack<int> stck;
    stck.push(7);
    cout<<stck.top();
    stck.pop();
    //
    queue<int> q;
    q.push(10);
    cout <<q.front();
    cout << q.back();
    q.pop();
    //
    set<int> numbers = {1, 7, 3, 2, 5, 9};
    numbers.insert(12);
    numbers.erase(13);
    //
    map<string, int> peopleAge = { {"Ali", 32} };
    peopleAge["Ali"] = 50;
    peopleAge.erase("Sina");




    //
    return 0;
}
