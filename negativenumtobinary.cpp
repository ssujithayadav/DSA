#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string onesComplement(const string &binary) {
    string result = binary;
    for (char &bit : result) {
        bit = (bit == '0') ? '1' : '0';
    }
    return result;
}

// Function to add 1 to a binary string
string addOne(const string &binary) {
    string result = binary;
    int carry = 1;

    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '0' && carry == 1) {
            result[i] = '1';
            carry = 0;
        } else if (binary[i] == '1' && carry == 1) {
            result[i] = '0';
        }
    }

    return result;
}

// Function to compute the two's complement of a binary string
string twosComplement(const string &binary) {
    string onesComp = onesComplement(binary);
    string twosComp = addOne(onesComp);
    return twosComp;
}

int main() {
    string binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    // Ensure that the input contains only 0s and 1s
    if (binaryNumber.find_first_not_of("01") != string::npos) {
        cout << "Invalid binary input." << endl;
        return 1;
    }

    string twosComplementResult = twosComplement(binaryNumber);
    cout << "Two's complement: " << twosComplementResult << endl;

    return 0;
}
