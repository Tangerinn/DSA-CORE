#include <iostream>
#include<vector>
using namespace std;

int search(vector<int>nums, int target, bool boolean)
{
int start=0;
int end=nums.size()-1;
int ans=-1;

while(start<=end)
  {
    int mid=start+(end-start)/2;
      //narrows down search-space
  if(target>nums[mid])
    {
      start=mid+1;
    }
      //narrows down search-space
    else if(target>nums[mid])
    {
      end=mid-1;
    }
    if(target==nums[mid])
      {
        ans=mid; 
        if(boolean)//for leftmost
        {
        end=mid-1; 
        }
        else//for rightmost
        {
          start=mid+1;
        }
      }
  }
return ans;
}
//function to search for the range
int searchRange(vector<int>nums, int target)
{
  int ans[]={-1,-1};
  //search for leftmost occurence fisrt
  ans[0]=search(nums,target,true);
  if(ans[0]!=-1)
  {
    ans[1]=search(nums,target,false);
  }
  return ans[0] && ans[1];
}

int main() {
 vector<int>nums={1,2,2,3,3,3,3,4,4,4,6}; //initialised a sample array.
int target=2;
  cout<<"Index range of "<<target<<" : "<<searchRange(nums,target);
}
