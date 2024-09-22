#include <iostream>
#include <string>
#include <vector>

using namespace std;

string smallestWord(int encoded) {
    // Handle edge cases for small encodings
    if (encoded <= 2) {
        return string(encoded, 'a');
    }

    // Initialize word with lowest-indexed possible characters
    string word = "aaa";

    // Iterate through letters from 'z' to 'a', using vector for flexibility
    vector<char> letters = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};

    // Calculate maximum possible value to avoid unnecessary iterations
    int maxValue = letters.size() * (letters.size() + 1) / 2;

    // Adjust word characters while reducing encoded value
    while (encoded > maxValue) {
        // Find largest available letter using binary search
        int left = 0, right = letters.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            int remaining = encoded - (letters.size() - mid) * (letters.size() - mid + 1) / 2;
            if (remaining >= mid + 1) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        // Update word and encoded value
        word[2] = letters[left];
        encoded -= (letters.size() - left) * (letters.size() - left + 1) / 2;

        // Move to the next character
        word[1] = word[2];
        word[2] = 'a';
    }
    // Handle single-letter cases more efficiently
    if (encoded == 1) {
        word = "a";
    } else {
        // Find two closest letters efficiently
        int letter1 = encoded - 1;
        int letter2 = encoded;
        word[1] = letters[letter1];
        word[2] = letters[letter2];
    }

    return word;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int encoded;
        cin >> encoded;

        string word = smallestWord(encoded);
        cout << word << endl;
    }

    return 0;
}
