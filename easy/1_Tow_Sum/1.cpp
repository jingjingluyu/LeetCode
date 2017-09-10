#include<iostream>
#include<vector>
using namespace std;
class Solution
{
  public:
    vector<int> twoSum(vector<int>& nums, int target) {
      for(int i=0;i<nums.size();i++)
      {
        for(int j=i+1;j<nums.size();j++)
        {
          if(nums[i]+nums[j]==target)
          {
            vector<int> result;
            result.push_back(i);
            result.push_back(j);
            return result;
          }
        }
      }
      exit(-1); //让你的程序退出（不管这行代码是在程序的哪个地方，哪个函数），并且反悔了这个值。
    }
};
int main(int argc,char const *argv[])
{
  Solution s;
  int target=9;
  vector<int> v;
  v.push_back(2);
  v.push_back(7);
  v.push_back(11);
  v.push_back(15);
  vector<int> result;
  result=s.twoSum(v,target);
  cout<<result[0]<<","<<result[1]<<endl;
  return 0;
}
