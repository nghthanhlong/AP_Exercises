#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> passwords;

void generatePasswords(string &s, string current, vector<bool> &used, int maxLength) {
    if (!current.empty()) {
        passwords.push_back(current);
    }
    
    if (current.length() == maxLength) return;

    for (int i = 0; i < s.length(); i++) {
        if (!used[i]) {
            used[i] = true;
            generatePasswords(s, current + s[i], used, maxLength);
            used[i] = false;
        }
    }
}

int main() {
    int n;
    string s;
    cin >> n >> s;

    vector<bool> used(s.length(), false);
    sort(s.begin(), s.end());

    generatePasswords(s, "", used, n);

    sort(passwords.begin(), passwords.end(), [](const string &a, const string &b) {
        return a.length() == b.length() ? a < b : a.length() < b.length();
    });

    for (const string &password : passwords) {
        cout << password << " ";
    }

    return 0;
}
