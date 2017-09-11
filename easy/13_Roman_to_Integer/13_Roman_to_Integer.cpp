/*Given a roman numeral, convert it to an integer.

Input is guaranteed to be within the range from 1 to 3999.

*/
#include<iostream>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
      map<char,int> a;
      a['I']=1;
      a['V']=5;
      a['X']=10;
      a['L']=50;
      a['C']=100;
      a['D']=500;
      a['M']=1000;
      int sum=0;
      for(int i=0;i<s.size();i++)
      {
        int m=a[s[i]];
        if(i==s.size()-1||a[s[i]]>=a[s[i+1]])
          sum=sum+m;
        else
          sum=sum-m;
      }
     return sum;
    }
};
int main()
{
  Solution m;
  string s;
  cin>>s;
  int result=0;
  result=m.romanToInt(s);
  cout<<result<<endl;
  return 0;
}
