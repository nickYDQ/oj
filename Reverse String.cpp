class Solution {
public:
    string reverseString(string s) {
        int p = 0,q = s.size()-1;
        while(p<=q)
        {
            swap(s[p],s[q]);
            p++;
            q--;
        }
        return s;

    }
};