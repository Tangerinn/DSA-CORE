//template : 


int binarySearch(int start, int end, int target, vector<int> mount, bool increasing)
{
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target == mount[mid])
        {
            ans = mid; // saved answer
            break; // Break out of the loop once target is found 
        }

        if (increasing == true) // true===> increasing
        {
            if (target > mount[mid])
            {
                start = mid + 1;
            }
            if (target < mount[mid])
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
            if (target < mount[mid])
            {
                start = mid + 1;
            }
        }
    }
    return ans; // returns -1 if ans is not found.
}
