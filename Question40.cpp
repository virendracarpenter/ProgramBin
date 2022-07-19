#include <bits/stdc++.h>
#include <vector>
#include <cctype>

using namespace std;

bool isPalindrome(string s)
{
    vector<char> str;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
        {
            str.push_back(s[i]);
        }
    }
    if (str.empty())
        return false;
    for (auto var : str)
    {
        cout << var;
    }
    for (int i = 0, j = str.size() - 1; j > i; i++, j--)
    {
        if (str[i] != str[j])
        {
            return false;
        }
    }
    return true;
}

bool isPalindromeEfficent(string s)
{
    int left = 0, right = s.length() - 1;
    while (left < right)
    {
        if (!isalnum(s[left]))
            left++;
        else if (!isalnum(s[right]))
            right--;
        else if (tolower(s[left]) != tolower(s[right]))
            return false;
        else
        {
            left++;
            right--;
        }
    }
    return true;
}

int main()
{
    isalnum('d');
    string s = "race a car";
    cout << isPalindrome(s) << endl;
    return 0;
}