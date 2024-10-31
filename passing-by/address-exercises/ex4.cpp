// Write a function that takes a character array (string) by address
// Convert all lowercase letters to uppercase

#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

void toUpperCase(string *word){
    transform(word->begin(), word->end(), word->begin(),
                ::toupper);
}

int main(){
    string word;
    cout << "Enter a word: "; cin >> word;

    toUpperCase(&word);
    cout << "\nTo upper case: " << word << endl;
    
    return 0;
}