#include <iostream>
#include <vector>

// This function calculates in the increasing portion or in the decreasing protion (depends upon what is called)

using namespace std;
int binarySearch(int start, int end, int target, vector<int> mount, bool increasing)
{
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target == mount[mid])
        {
            ans = mid; // saved answer
            break; // Break out of the (nearest) LOOP once target is found 
        }

        if (increasing == true) // true===> increasing
        {
            if (target > mount[mid])
            {
                start = mid + 1;
            }
            else if (target < mount[mid])
            {
                end = mid - 1;
            }
        }

        else // false===> decreasing
        {
            if (target > mount[mid])
            {
                end = mid - 1;
            }
            else if (target < mount[mid])
            {
                start = mid + 1;
            }
        }
    }
    return ans; // returns -1 if ans is not found.
}

// main function begins
int main()
{
    vector<int> mount = {0, 1, 2, 3, 4, 5, 7, 15, 11, 6, 4, 2, 1}; // sample mountain array
    int target =11;

    // finding peak

    int start = 0;
    int end = mount.size() - 1;
    int ans = -1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (mount[mid] < mount[mid + 1]) // landed on the increasing part of array
        {
            start = mid + 1;
        }
        else if (mount[mid] > mount[mid + 1]) // landed on the decreasing part of array
        {
            end = mid;
        }
    }

    int peak = start;

       ans= binarySearch( 0, peak, target, mount, true);
    if (ans == -1)
    {
        ans = binarySearch(peak+1, mount.size() - 1, target, mount, false); 
        //"peak+1" : the "+1" is important. We have considered the peak'th element in the "icreasing portion" pf array. 
        //So the decreasing part must start from "peak+1"th index.
    }
        cout << "Index of lowest occurence of " << target << " : " << ans;

    return 0;
}
