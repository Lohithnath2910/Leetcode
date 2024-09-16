void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) 
{
    int i=0;
    int j=0;
    int k=0;
    int temp[m+n];
    while(i < m && j < n)
    {
        if(nums1[i] < nums2[j])
        {
            temp[k] = nums1[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = nums2[j];
            j++;
            k++;
        }
    }

    while(i < m)
    {
        temp[k] = nums1[i];
        i++;
        k++;
    }     
    while(j < n)
    {
        temp[k] = nums2[j];
        j++;
        k++;
    }

    for(int m = 0;m<k;m++)
    {
        nums1[m] = temp[m];
    }
}