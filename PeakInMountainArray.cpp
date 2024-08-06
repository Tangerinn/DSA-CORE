//function template : For copy pasting

int findPeak(vector<int> mount) //finds peak value of mountain array.
{
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
    return peak;
}
