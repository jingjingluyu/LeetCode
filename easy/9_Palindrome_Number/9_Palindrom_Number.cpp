/*
Determine whether an integer is a palindrome. Do this without extra space.
Could negative integers be palindromes? (ie, -1)

If you are thinking of converting the integer to string, note the restriction of using extra space.

You could also try reversing an integer. However, if you have solved the problem "Reverse Integer", you know that the reversed integer might overflow. How would you handle such case?

There is a more generic way of solving this problem.
*/
#include<iostream>
using namespace std;
class Solution
{
public:
  bool isPalindrom(int x)
  {
    if(x<0) return false;
    int dev=1;
    for(dev=1;(x/dev)>=10;dev*=10);
    while(x>0)
    {
      int begin=0;
      int end=0;
      begin=x/dev;
      end=x%10;
      if(begin!=end)
        return false;
      else
      {
        x=(x%dev)/10;
        dev=dev/100;
      }
    }
    return true;
 }
};
int main()
{
  Solution x;
  int num;
  cin>>num;
  int result=x.isPalindrom(num);
  cout<<result<<endl;
  return 0;
}
