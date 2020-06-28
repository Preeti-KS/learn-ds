#include<iostream>
using namespace std;

bool is_null(char c) {
    return c == '\0';
}
int strlenM(const char *s) {
    return is_null(*s) ? 0 : 1 + strlen(s + 1);
}

int strlen(const char *s) {
    cout << (void *) s << " : " << *s << " : " << (int) *s << endl;

    if (*s == '\0') {
        return 0;
    } else {
        return 1 + strlen(s + 1);
    }
}
int main() {
    const char* inputs[] = {"manish", "my name is preeti"};
    int num_inputs = sizeof(inputs) / sizeof(inputs[0]);
    for(int i=0; i<num_inputs; i++) {
        cout << inputs[i] << ": " << strlen(inputs[i]) << endl;
    }
    return 0;
}