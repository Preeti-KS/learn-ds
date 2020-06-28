#include<iostream>
using namespace std;

bool is_upper(char c) {
    return 64 < c && c < 91;
}

char first_uppercase(const char *s) {

    if (*s == '\0') {
        return '\0';
    }

    if (is_upper(*s) == true) {
        return *s;
    }
    char c = first_uppercase(s + 1);
    // cout << "Intermediate c=" << (int) c << endl;
    return c;
}

int main() {
    const char* inputs[] = {"manIsh", "my name is preeti"};
    int num_inputs = sizeof(inputs) / sizeof(inputs[0]);
    for(int i=0; i<num_inputs; i++) {
        cout << inputs[i] << ": " << first_uppercase(inputs[i]) << endl;
    }
    return 0;
}