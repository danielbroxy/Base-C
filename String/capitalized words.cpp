#include<iostream>
using namespace std;
bool isalpha(char c)
{
    return 'A' <= c && c <= 'Z' || 'a' <= c && c <= 'z';
}
void lower(char & c)
{
    if ('A' <= c && c <= 'Z')
    c += 32;
}
void upper(char & c)
{
    if ('a' <= c && c <= 'z')
    c -= 32;
}
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); ++i)
    {
        if (isalpha(s[i]) && (i == 0 || !isalpha(s[i - 1])))
            upper(s[i]);
        else
            lower(s[i]);
    }
    cout << s << endl;
}

