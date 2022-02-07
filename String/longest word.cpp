#include<iostream>
using namespace std;
bool isalpha(char c)
{
    return 'A' <= c && c <= 'Z' || 'a' <= c && c <= 'z';
}
int main()
{
    string s;
    getline(cin, s);
    string curr_word, longest_word;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isalpha(s[i]))
            curr_word += s[i];
        else
            curr_word = "";
        if (curr_word.size() > longest_word.size())
            longest_word = curr_word;
    }
    cout << longest_word << endl;
}
