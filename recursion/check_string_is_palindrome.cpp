#include<iostream>

using namespace std;

bool stringIsPalindrome(string str, int i) {
    if(i > str.length()/2) return true;

    if(str[i] != str[str.length()-i-1]) {
        return false;
    } 

    return stringIsPalindrome(str, i+1);
}

int main() {
    string str = "MADAM";

    cout << stringIsPalindrome(str, 0) << endl;
    return 0;
}