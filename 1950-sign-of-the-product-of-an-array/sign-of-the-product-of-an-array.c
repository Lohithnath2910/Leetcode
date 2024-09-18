int signfunc(int x)
{
    int temp = 0;
    if(x > 0)
    {
        temp = 1;
    }
    else if(x < 0)
    {
        temp = -1;
    }
    else if(x = 0)
    {
        temp = 0;
    }
    return temp;
}

int arraySign(int* nums, int numsSize) 
{
    int prod = 1;
    int result;
    for(int i = 0 ; i < numsSize;i++)
    {
        if(nums[i] > 0)
        {
            nums[i] = 1;
            prod = prod*nums[i];
        }
        else if(nums[i]<0)
        {
            nums[i] = -1;
            prod = prod*nums[i];
        }
        else if(nums[i] == 0)
        {
            prod = 0;
            break;
        }
    }
    result = signfunc(prod);
    return result;
}