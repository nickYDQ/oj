class Solution {
public:
    string reverseVowels(string s) {
        int p = 0,q = s.size()-1;
        string vowels = "aeiouAEIOU";
        while(p<q)
        {
            int f1 = vowels.find_first_of(s[p]);
            
            if(f1==-1)
            {
                p++;
            }
            int f2 = vowels.find_first_of(s[q]);
            
            if(f2==-1)
            {
                q--;
            }
            if(f1!=-1&&f2!=-1)
            {
                swap(s[p],s[q]);
                p++;
                q--;
            }
        }
        return s;

    }
};