#include <iostream>
#include <vector>
using namespace std;

//binary search function for increasing array.
int binarySearch(int start, int end, int target, vector<int>nums)
{
    int ans=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;

        if(target==nums[mid])
        {
          ans=mid; //stored answer
          break;   //break out of nearest loop
        }
        else if(target>nums[mid])
        {
            start=mid+1;
        }
        else
        {
             end=mid-1;
        }
    }
    return ans;
}


int main()
{
    vector<int> nums = {3, 4, 5, 6, 7, 0, 1, 2}; // sample array (rotated)
    int target =2;

//Finding pivot(max or min value in a rotated array) 
//APPROACH : Compare the mid value with the start value and reduce search space accordingly. 
    int start = 0;
    int end = nums.size() - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] >= nums[start])
        {
            start = mid + 1;
        }
        else // nums[mid]<nums[start]
        {
            end = mid - 1;
        }
    }
    // cout << "pivot : " << nums[start];
int pivot=start;

int ans=binarySearch(0, pivot, target, nums);
if(ans!=-1)
{
    cout<<target<<" is present at index "<<ans;
}
// if its not found in the first part of the array, then look for it in the second part
ans=binarySearch(pivot+1, nums.size()-1, target, nums);
if(ans!=-1)
{
    cout<<target<<" is present at index "<<ans;
}
return 0;
}
