class Solution {
bool palindrome(string s)
{
    int i=0;
    int j=s.length()-1;
    while(i<=j)
    {
        if(s[i]!=s[j])
        return false;
        i++;
        j--;
    }
    return true;
}
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            string s=words[i];
            if(palindrome(s)==1)
            return words[i];
         }
         return "";
    }
};