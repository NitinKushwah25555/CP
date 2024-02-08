#include <bits/stdc++.h>

using namespace std;


void reverseString(string& str, int start, int end) {
    if (start >= end)
        return;
    
    swap(str[start], str[end]);
   
    reverseString(str, start + 1, end - 1);
}

int main() {
    string S;
    cout << "Enter a string: ";
    getline(cin, S);
    
  
    reverseString(S, 0, S.length() - 1);
    
    cout << "Reversed string: " << S << endl;
    
    return 0;
}