#include <iostream>
#include <algorithm>

using namespace std;

bool isAnagram(string *s, string *t)
{
    sort(s->begin(), s->end());
    sort(t->begin(), t->end());

    return s == t;
}

bool isAnagramEff(string s, string t)
{
    int alphabet[26];
    for (int i = 0; i < s.length(); i++)
        alphabet[(char)s[i] - 'a']++;
    for (int i = 0; i < t.length(); i++)
        alphabet[(char)t[i] - 'a']--;
    for (int i : alphabet)
        if (i != 0)
            return false;
    return true;
}

int main()
{
    string s = "anagram", t = "nagaram";
    cout << isAnagram(&s, &t) << endl;
    // cout << isAnagramEff(s, t) << endl;
    return 0;
}
