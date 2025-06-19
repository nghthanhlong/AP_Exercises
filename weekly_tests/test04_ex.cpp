#include <iostream>
#include <vector>
using namespace std;

void generate(int n, int start, vector<int>& current) {
    if (n == 0) {
        for (int num : current) cout << num << " ";
        cout << endl;
        return;
    }

    for (int i = start; i <= n; ++i) {
        current.push_back(i);
        generate(n - i, i, current);
        current.pop_back();
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> current;
    generate(n, 1, current);

    return 0;
}
