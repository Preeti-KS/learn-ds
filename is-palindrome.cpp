#include<iostream>
using namespace std;

bool is_null(char c) {
    return c == '\0';
}

int strlen(const char *s) {
    return is_null(*s) ? 0 : 1 + strlen(s + 1);
}

bool is_palindrome(const char *s, int length) {

    if (length == 0 || length == 1)
        return true;

    return (*s == s[length-1]) &&
        is_palindrome(s+1, length-2);
}

const char* to_string(bool b){
    return b == true ? "true" : "false";
}

int main() {
    const char* inputs[] = {"abba", "abab", "ababa", ""};
    int num_inputs = sizeof(inputs) / sizeof(inputs[0]);
    for(int i=0; i<num_inputs; i++) {
        cout << inputs[i] << ": " << to_string(is_palindrome(inputs[i], strlen(inputs[i]))) << endl;
    }
    return 0;
}