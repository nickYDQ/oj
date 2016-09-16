class Solution {
public:
    bool islegal(char& x)
    {
        if('0'<=x && x<='9')
        {
            return true;
        }
        if(x>='a'&&x<='z')
        {
            return true;
        }
        if(x>='A'&&x<='Z')
        {
            x = x+32;
            return true;
        }
        return false;
    }
    
    bool isPalindrome(string s) {
        if(s.size()<0)
        {
            return false;
        }
        int left = 0;
        int right = s.size()-1;
        while(left<right)
        {
            if(!islegal(s[left]))
            {
                left++;
            }
            if(!islegal(s[right]))
            {
                right--;
            }
            else if(islegal(s[left])&&islegal(s[right]))
            {
                if(s[left]==s[right])
                {
                    left++;
                    right--;
                }
                else{
                    return false;
                }
                
            }
        }
        return true;
       
    }
};