#define _CRT_SECURE_NO_WARNINGS
void moveZeroes(int* nums, int numsSize)
{
    int i = 0;
    for (i = 0; i < numsSize - 1; i++)
    {
        int j = 0;
        for (j = 0; j < numsSize - 1 - i; j++)
        {
            if (nums[j] == 0)
            {
                int r = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = r;
            }
        }
    }
}