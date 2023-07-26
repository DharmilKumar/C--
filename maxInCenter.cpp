#include <iostream>
#include <string>
using namespace std;
int main() {
    string number;
    cout << "Enter number: ";
    cin >> number;

    char maxDigit = number[0];
    size_t pos = 0;
    for (size_t i = 1; i < number.size(); i++) {
        if (number[i] > maxDigit) {
            maxDigit = number[i];
            pos = i;
        }
    }
    
    string rearrangedNum = number;
    rearrangedNum[pos] = number[number.size() / 2];
    rearrangedNum[number.size() / 2] = maxDigit;

    cout << "Rearranged Number: " << rearrangedNum << endl;

    return 0;
}
