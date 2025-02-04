#include <iostream>
#include <vector>

/* THIS BULLSHIT IS RESULTING IN TLE */

#define LL long long
#define pb push_back

bool valueIn(std::vector<int> &v, int value) {
    for (int i = 0; i < v.size(); i++)
        if (v[i] == value)
            return true;

    return false;
}

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n;
    std::cin >> n;

    int ans { 0 };
    std::vector<int> valueSet;

    while (n > 0) {
        int in;
        std::cin >> in;

        if (!valueIn(valueSet, in)) {
            valueSet.pb(in);
            ans++;
        }
        
        n--;
    }

    std::cout << ans << '\n';
    return 0;
}
