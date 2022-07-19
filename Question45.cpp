

#include <bits/stdc++.h>

using namespace std;

string printSequence(string S)
{
    vector<string> output;

    string str[] = {"2", "22", "222",
                    "3", "33", "333",
                    "4", "44", "444",
                    "5", "55", "555",
                    "6", "66", "666",
                    "7", "77", "777", "7777",
                    "8", "88", "888",
                    "9", "99", "999", "9999"};
    int n = S.length();

    for (int i = 0; i < n; i++)
    {
        if (S[i] == ' ')
        {
            output.push_back("0");
        }
        else
        {
            int position = S[i] - 'A';
            output.push_back(str[position]);
        }
    }

    string s;
    return accumulate(output.begin(), output.end(), s);
}

int main(int argc, char const *argv[])
{
    string s = "E JJXOMETC";
    cout << printSequence(s) << endl;
    return 0;
}
// https://practice.geeksforgeeks.org/problems/convert-a-sentence-into-its-equivalent-mobile-numeric-keypad-sequence0547/1