/*Given an array of integers,
  return indices of the two numbers such that they add up to a specific target.
  You may assume that each input would have exactly one solution,
  and you may not use the same element twice.*/

/*Example
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].*/

#include<iostream>
using namespace std;
int* twoSum(int* nums,int numsSize,int target)
{
  static int b[2]={0}; //不使用静态变量会有警告。由于返回值是两个值所以需要返回数组，题目中返回指针，但是当函数结束后这片内存被释放，局部变量不存在了。
                       //p指向b，但b被释放掉了，所以出错。所以要返回静态局部变量的地址
  for(int i=0;i<numsSize-1;i++)
  {
    for(int j=i+1;j<numsSize;j++)
    {
      if(*(nums+i)+ * (nums+j)==target)
      {
        b[0]=i;
        b[1]=j;
      }
    }
  }
  return b;
}
int main()
{
  int a[]={2,7,11,15};
  int target=9;
  int numsSize=4;
  int *p=twoSum(a,numsSize,target);
  cout<<*p<<","<<*(p+1)<<endl;
  free(p);
}
