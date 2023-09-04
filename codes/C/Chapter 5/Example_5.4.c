#include <iostream>
#include <vector>

using namespace std;

void Mapping(const vector<int> &f, vector<int> &result) {
    auto n = f.size();
    vector<int> c(n, 0);
    vector<int> queue;
    int len = 0;

    for (int i = 0; i < n; ++i) {
        ++c[f[i]];
    }

    for (int i = 0; i < n; ++i) {
        if (c[i] == 0) {
            queue.push_back(i);
            len++;
        }
    }

    int k = 0;
    while (k < len) {
        result[queue[k]] = 0;
        c[f[queue[k]]]--;
        if (c[f[queue[k]]] == 0) {
            queue.push_back(f[queue[k]]);
            len++;
        }
        k++;
    }
}

void showResult(const vector<int> &result) {
    int size = 0;
    vector<int> elements;

    for (int i = 0; i < result.size(); ++i) {
        if (result[i] != 0) {
            size++;
            elements.push_back(i + 1);
        }
    }

    cout << size << endl;
    for (int element: elements) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> f(n);
    vector<int> result(n, 1);

    for (int i = 0; i < n; ++i) {
        cin >> f[i];
        f[i]--;  // Adjusting the input to be 0-based.
    }

    Mapping(f, result);
    showResult(result);

    return 0;
}
