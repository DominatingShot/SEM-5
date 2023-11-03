#include <iostream>
#include <vector>
#include <string>

using namespace std;

// A function to perform counting sort based on a character position
void countingSort(vector<string> &arr, int exp) {
    const int n = arr.size();
    const int range = 256; // Assuming ASCII characters

    vector<string> output(n);
    vector<int> count(range, 0);

    // Count the frequency of characters at the specified position
    for (int i = 0; i < n; i++) {
        int index = (exp < arr[i].length()) ? arr[i][arr[i].length() - exp - 1] : 0;
        count[index]++;
    }

    // Calculate the cumulative count for each character
    for (int i = 1; i < range; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array based on character counts
    for (int i = n - 1; i >= 0; i--) {
        int index = (exp < arr[i].length()) ? arr[i][arr[i].length() - exp - 1] : 0;
        output[count[index] - 1] = arr[i];
        count[index]--;
    }

    // Copy the sorted output back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// Radix Sort for strings
void radixSort(vector<string> &arr) {
    int maxLen = 0;

    // Find the maximum length of strings in the array
    for (const string &s : arr) {
        maxLen = max(maxLen, static_cast<int>(s.length()));
    }

    // Perform counting sort for each character position from right to left
    for (int exp = 0; exp < maxLen; exp++) {
        countingSort(arr, exp);
    }
}

int main() {
    vector<string> strings = {"apple", "banana", "cherry", "date", "grape"};

    cout << "Original strings: ";
    for (const string &s : strings) {
        cout << s << " ";
    }
    cout << endl;

    // Sort the strings using radix sort
    radixSort(strings);

    cout << "Sorted strings: ";
    for (const string &s : strings) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}

