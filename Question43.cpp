#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    string removeConsecutiveCharacter(string S)
    {
        vector<char> str;
        str.push_back(S[0]);
        for (int i = 1; i < S.length(); i++)
        {
            if (S[i] != str.back())
            {
                str.push_back(S[i]);
            }
        }
        return str.data();
    }
    string rCC(string S){
        string res="";
        res+=S[0];
        for(int i=1;i<S.length();i++)
        {
            if(S[i-1]!=S[i])
            {
                res+=S[i];
            }
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    string str = "babcddbce";
    cout << s.removeConsecutiveCharacter(str);
    cout << endl;
    return 0;
}