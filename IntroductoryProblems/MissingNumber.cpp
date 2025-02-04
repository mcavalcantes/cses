#include <iostream>

#define LL long long

int main() {
    LL n, sum { 0 };
    std::cin >> n;
    
    for (LL i = 0; i < n - 1; i++) {
        LL in;
        std::cin >> in;

        sum += in;
    }

    std::cout << ((n * (n + 1)) / 2) - sum << '\n';
    return 0;
}
