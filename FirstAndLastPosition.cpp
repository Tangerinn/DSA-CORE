#include <iostream>
#include<vector>
using namespace std;

//function to search for the 1st occurence index
int searchLeftmost(vector<int>nums, int size, int target)
{
int start=0;
int end=size-1;
int ans=-1;

while(start<=end)
  {
    int mid=start+(end-start)/2;

    if(target==nums[mid])
    {
      ans=mid; //potentital answer
      end=mid-1; //minimised searchspace, for leftmost index.
    }
      //narrows down search-space
    else if(target>nums[mid])
    {
      start=mid+1;
    }
      //narrows down search-space
    else
    {
      end=mid-1;
    }
  }
return ans;
}

//function to search for the last occurence index

int searchRightmost(vector<int>nums, int size, int target)
{
int start=0;
int end=size-1;
int ans=-1;

while(start<=end)
  {
    int mid=start+(end-start)/2;

    if(target==nums[mid])
    {
      ans=mid; //potentital answer
      start=mid+1; //minimised searchspace, for rightmost index.
    }
      //narrows down search-space
    else if(target>nums[mid])
    {
      start=mid+1;
    }
      //narrows down search-space
    else
    {
      end=mid-1;
    }
  }
return ans;
}
int main() {
 vector<int>nums={1,2,2,3,3,3,3,4,4,4,6}; //initialised a sample array.
int target=2;
  cout<<"Index range of "<<target<<" : "<<searchLeftmost(nums,nums.size(),target)<<", "<<searchRightmost(nums,nums.size(),target);
}
