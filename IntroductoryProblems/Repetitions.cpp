#include <iostream>

#define LL long long

int main() {
    std::string s;
    std::cin >> s;

    int max { 1 };
    int count { max };
    char last { s[0] };

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == last) {
            count++;
        } else {
            max = (max < count) ? count : max;
            count = 1;
            last = s[i];
        }
    }

    if (count > max)
        max = count;
    
    std::cout << max << '\n';
    return 0;
}
