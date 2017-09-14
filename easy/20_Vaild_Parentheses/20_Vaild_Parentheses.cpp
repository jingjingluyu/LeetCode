/*Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
*/

#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
      stack<char> st;
      if(s.size()%2!=0) return false;
      for(auto ch : s)
      {
        if(ch=='{'||ch=='['||ch=='(')
          st.push(ch);
        else if(ch=='}'||ch==']'||ch==')')
        {
          if(st.empty()) return false;
          else
          {
            char topch=st.top();
            if((topch=='{'&&ch=='}')||(topch=='['&&ch==']')||(topch=='('&&ch==')'))
              st.pop();
            else {return false; cout<<"1"<<endl;}
          }
        }
        else return false;
      }
      return st.empty();
}
};
int main()
{
  Solution m;
  string str="{{";
  cout<<m.isValid(str)<<endl;
  return 0;
}


/*stack<char> st;
if(s.size()%2!=0) return false;
for(auto ch : s)
{
  if(ch=='{'||ch=='['||ch=='(')
    st.push(ch);
  else if(ch=='}'||ch==']'||ch==')')
  {
    if(st.empty()) return false;
    else
    {
      char topch=st.top();
      if((topch=='{'&&ch=='}')||(topch=='['&&ch==']')||(topch=='('&&ch==')'))
        st.pop();
      else return false;
    }
  }
  else return false;
}
return true;
}
*/
