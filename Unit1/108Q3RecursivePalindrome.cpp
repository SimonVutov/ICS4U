#include <iostream>
#include <algorithm>
using namespace std; // Simon Vutov

string reverse(string s) {
    return s.length() <= 1 ? s : reverse(s.substr(1)) + s[0];
}

bool isPalindrome(string s) {
    if (s.length() <= 1) return true;
    if (tolower(s[0]) == tolower(s[s.length() - 1])) return isPalindrome(s.substr(1, s.length() - 2));
    return false;
}

int main() {
    string s;
    getline(cin, s);
    cout << reverse(s) << endl;

    s.erase(remove(s.begin(), s.end(), ' '), s.end()); // remove spaces
    cout << (isPalindrome(s) ? "true" : "false") << endl;

    return 0;
}
