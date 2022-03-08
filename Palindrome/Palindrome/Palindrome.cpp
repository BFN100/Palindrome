/*
Author: Bianca Fernandes Nascimento
Language: C++
Objective: Take a word, invert it and show whether or not it is a palindrome.
Made in Visual Studio
*/


#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

// declaration of variables
string word;
string word_reversed;
int answer;

// declaration of functions
int reversed(string word_reversed);
bool palindrome(int response);


int reversed(string word_reversed)
{
    cout << "---------------------------------------------------------------" << endl;
    cout << "This algorithm will tell you if the word is a palindrome" << endl;
    cout << "---------------------------------------------------------------" << endl;

    // Ask the user to speak
    cout << "\n Good morning! Write a word, please: ";
    cin >> word;

    // Inverts and shows the inverted word
    word_reversed.resize(word.size());
    copy(word.rbegin(), word.rend(), word_reversed.begin());

    cout << "This is the opposite word: " << word_reversed << endl;

    return 0;

}

// Function that will show true = 1, if it is a palindrome
bool palindrome(int answer)
{
    reversed(word_reversed);

    if (word == word_reversed)
    {
        answer = true;
        return true;
    }
    else
    {
        answer = false;
        return false;
    }
}

int main()
{
    // Call the palindrome function
    palindrome(answer);

    // Print the result:
    cout << "If it's a palindrom, it'll be true (1): " << answer << endl;

    return 0;
}