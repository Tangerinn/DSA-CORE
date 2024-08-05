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
    else if(target<nums[mid])
    {
      end=mid-1;
    }
    if(target==nums[mid])
      {
        ans=mid; 
        if(boolean==true)//for leftmost
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

int main() {
 vector<int>nums={1,2,2,3,3,3,3,4,4,4,6}; //initialised a sample array.
int target=4;
  cout<<"Index range of "<<target<<" : "<<search(nums,target, true)<<", "<<search(nums,target, false);

}
