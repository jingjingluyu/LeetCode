#include<iostream>
using namespace std;
class Reverse
{
public:
  int solution(int x)
  {
    int max=0x7FFFFFFF;
    int min=0x80000000;
    long long int sum=0;
    int yushu=0;
    while(x!=0){
    yushu=x%10;
    sum=sum*10+yushu;
    x=(x-yushu)/10;
  }
    if(sum>max||sum<min)
      return 0;
    else return sum;
  }
};
int main()
{
  Reverse s;
  int num,result;
  cin>>num;
  if(num==0){
   cout<<num<<endl;
   return 0;
 }
 else{
  result=s.solution(num);
  if(result!=0)
    cout<<result<<endl;
  else
  return 0;
}
  return 0;
}
