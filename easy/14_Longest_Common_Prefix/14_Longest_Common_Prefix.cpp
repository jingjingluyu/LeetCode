/*Write a function to find the longest common prefix string amongst an array of strings.

思路：
设第一个字符长度为前缀长度，因为前缀长度肯定不能超过任意一个字符串的长度。
将第一个字符串的每一位与所有的每一位进行比较，找到公共的前缀，把它设为当前字符串，再与下一个字符串比较。
如果某个字符串的长度为0，就直接返回空字符串。*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string same;
      if(strs.size()==0) return same;
        bool result=true;
        for(int i=1;i<=strs[0].size();i++)
        {
          string w=strs[0].substr(0,i);
          for(int j=1;j<strs.size();j++)
          {
            if(i>strs[j].size()||w!=strs[j].substr(0,i))
              {result=false; break;}
          }
          if(!result)
            return same;
          same=w;
        }
        return same;
      }
};
int main()
{
  Solution m;
  const char* a[]={"c"};
  vector<string> str(a,a+1);
  cout<<m.longestCommonPrefix(str)<<endl;
}
