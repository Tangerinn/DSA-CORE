#include <iostream>
#include <vector>

using namespace std;

//Finding pivot(max or min value in a rotated array) 
//APPROACH : Compare the mid value with the start value and reduce search space accordingly. 
int main()
{
    vector<int> nums = {3, 4, 5, 6, 7, 0, 1, 2}; // sample array (rotated)
    // int target =6;

    int start = 0;
    int end = nums.size() - 1;
    int ans = -1;

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
    cout << "pivot : " << nums[start];
}
