#ifndef DINO_SOURCE_STR_CAN_CHANGE_H
#define DINO_SOURCE_STR_CAN_CHANGE_H

#include <string>

class Solution {
public:
    auto canChange(std::string const& s, std::string const& t) -> bool {
        auto L{'L'}, R{'R'}, underscore{'_'};
        for (auto n{std::ssize(s)}, i{0L}, j{0L}; i < n || j < n; ++i, ++j) {
            while (i < n && s[i] == underscore) {
                ++i;
            }
            while (j < n && t[j] == underscore) {
                ++j;
            }
            if (s[i] != t[j] || (s[i] == L && i < j) || (s[i] == R && i > j)) {
                return false;
            }
        }
        return true;
    }
};

#endif // DINO_SOURCE_STR_CAN_CHANGE_H
