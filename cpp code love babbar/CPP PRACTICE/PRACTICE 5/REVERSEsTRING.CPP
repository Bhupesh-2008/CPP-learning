#include <iostream>
using namespace std;

int getLength(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

void reverseString(char name[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        swap(name[start++], name[end--]);
    }
}

int main() {
    char s[] = "aeou";   // proper C-style string

    cout << "Your character string is: " << s << endl;

    int len = getLength(s);
    reverseString(s, len);

    cout << "Reversed string is: " << s << endl;

    return 0;
}