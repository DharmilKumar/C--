#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> strings = {"Dharmil", "Jil", "Badal", "Yash","Darshan","Bhagirath","Ayush","Jaimin","Yug","Roshan"};

    int n = strings.size();

    for (int i = 0; i < n; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (strings[j] < strings[min_idx]) {
                min_idx = j;
            }
        }

        swap(strings[i], strings[min_idx]);
    }

    cout << "Sorted strings: ";
    for (const auto& str : strings) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}
