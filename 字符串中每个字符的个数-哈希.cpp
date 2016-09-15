#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string input;
    while(cin>>input)
    {
        vector<int> vec(26,0);
        for(int i=0;i<input.size();i++)
        {
            vec[input[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(vec[i]!=0)
            {
                cout<<(char)('a'+i)<<"---->"<<vec[i]<<endl;
            }
        }
    }
    return 0;
}
