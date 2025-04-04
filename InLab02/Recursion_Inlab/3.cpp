#include<iostream>
#include<string>
using namespace std;



bool palindromeRecursion(string s, int start , int end ) {  
    if (start >= end) {
        return true;
    }
    if (s[start] != s[end]) {
        return false;
    }
    return palindromeRecursion(s, start + 1, end -1);
}
bool palindromeRecursion(string s) {
    return palindromeRecursion(s, 0, s.length() - 1);
}

int main() {
    string input;
    
    while (true) {
        cin >> input;
        if (input[0] == '*') {
            break;
        }
        bool iterativeResult = palindrome(input);
        bool recursiveResult = palindromeRecursion(input);
        
        cout << (iterativeResult ? "true" : "false") << " " << (recursiveResult ? "true" : "false") << endl;
    }
    
    return 0;
}