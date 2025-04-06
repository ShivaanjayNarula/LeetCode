/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */
class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int peakIndex = peak(mountainArr);
        int left = search(mountainArr, target, 0, peakIndex, true);
        if(left != -1)
        {
            return left;
        }
        return search(mountainArr, target, peakIndex + 1, mountainArr.length() - 1, false);
    }

    int peak(MountainArray &arr)
    {
        int start = 0;
        int end = arr.length() - 1;
        while(start < end)
        {
            int mid = (start + end) / 2;
            if(arr.get(mid) < arr.get(mid + 1))
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        return start;
    }

    int search(MountainArray &arr, int target, int start, int end, bool left)
    {
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            int midVal = arr.get(mid);
            if(midVal == target)
            {
                return mid;
            }
            else if(target < midVal)
            {
                if(left)
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            else
            {
                if(left)
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};
