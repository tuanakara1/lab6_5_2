#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool is_palindrome(string str) {
    string reversed_str = str;
    reverse(reversed_str.begin(), reversed_str.end());
    return str == reversed_str;
}

vector<string> palindrome_strings(vector<string> str_list) {
    vector<string> result;
    for (auto str : str_list) {
        if (is_palindrome(str)) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> str_list = {"orange", "level", "hello", "radar", "civic"};
    vector<string> palindrome_list = palindrome_strings(str_list);
    for (auto str : palindrome_list) {
        cout << str << " ";
    }
    cout << endl;
    return 0;
}
