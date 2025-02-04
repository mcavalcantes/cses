#include <iostream>
#include <vector>

#define LL long long
#define pb push_back

int main() {
    LL n;
    std::cin >> n;

    std::vector<LL> v;
    while (n > 0) {
        LL in;
        std::cin >> in;

        v.pb(in);
        n--;
    }

    LL ans { 0 };
    for (LL i = 0; i < v.size() - 1; i++) {
        LL curr { v[i] };

        if (v[i] > v[i + 1]) {
            ans += v[i] - v[i + 1];
            v[i + 1] = curr;
        }
    }

    std::cout << ans << '\n';
    return 0;
}
