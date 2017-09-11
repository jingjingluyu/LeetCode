/*Given a roman numeral, convert it to an integer.

Input is guaranteed to be within the range from 1 to 3999.


(1) 相同的数字连写、所表示的数等于这些数字相加得到的数、如：Ⅲ=3；
(2) 小的数字在大的数字的右边、所表示的数等于这些数字相加得到的数、 如：Ⅷ=8、Ⅻ=12；
(3) 小的数字（限于 I、X 和 C）在大的数字的左边、所表示的数等于大数减小数得到的数、如：Ⅳ=4、Ⅸ=9；
(4) 正常使用时、连写的数字重复不得超过三次；
(5) 在一个数的上面画一条横线、表示这个数扩大 1000 倍。

思路：
 （1）如果当前数字是最后一个数字，或者之后的数字比它小的话，则加上当前数字
 （2）其他情况则减去这个数字*/
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
