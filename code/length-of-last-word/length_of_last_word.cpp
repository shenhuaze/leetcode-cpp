#include <iostream>

using namespace std;

int LengthOfLastWord(string s) {
    if (s.empty()) {
        return 0;
    }
    int i = int(s.size()) - 1;
    while (i >= 0 && s[i] == ' ') {
        i -= 1;
    }
    int len = 0;
    while (i >= 0 && s[i] != ' ') {
        len += 1;
        i -= 1;
    }
    return len;
}

int main() {
    string s = "Hello World";
    cout << LengthOfLastWord(s);
    return 0;
}