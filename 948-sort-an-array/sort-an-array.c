void merge(int* x,int low,int mid,int high)
{
    int l = mid-low+1;
    int r = high - mid;
    int arr1[l];
    int arr2[r];
    for(int i = 0;i < l;i++)
    {
        arr1[i] = x[i + low];
    }
    for(int i = 0;i < r;i++)
    {
        arr2[i] = x[i + mid + 1];
    }

    int i = 0;
    int j = 0;
    int k = low;

    while(i < l && j < r)
    {
        if(arr1[i] > arr2[j])
        {
            x[k] = arr2[j];
            j++;
            k++;
        }
        else
        {
            x[k] = arr1[i];
            i++;
            k++;
        }
    }

    while(i < l)
    {
        x[k] = arr1[i];
        i++;
        k++;
    }

    while(j < r)
    {
        x[k] = arr2[j];
        j++;
        k++;
    }
}

void merge_sort(int* x,int low,int high)
{
    if(low == high)
    {
        return;
    }
    int mid = (low + high)/2;
    merge_sort(x,low,mid);
    merge_sort(x,mid+1,high);
    merge(x,low,mid,high);
}

int* sortArray(int* nums, int numsSize, int* returnSize) 
{
    int high = numsSize-1;
    int low = 0;
    merge_sort(nums,low,high);
    (*returnSize) = numsSize;
    return nums;
}

