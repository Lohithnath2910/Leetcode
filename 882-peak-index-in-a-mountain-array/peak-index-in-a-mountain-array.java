class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int l =0,h=arr.length-1;
        int idx = -1;

        while(l <= h)
        {
            int mid = (l+h)/2;

            if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1])
            {
                idx = mid;
                break;
            }
            else if(arr[mid] > arr[mid+1])
            {
                h = mid - 1;
            }

            else
            {
                l = mid+1;
            }
        }
        return idx;
    }
}