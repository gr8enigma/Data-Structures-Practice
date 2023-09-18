// https://leetcode.com/problems/two-sum/
#include <stdio.h>

void twoSum(int* nums, int numsSize, int target, int* returnSize)  {
    int solution_Found = 0;
    int i = 0;
    int j;
    while(i < (numsSize - 1) && !solution_Found)
    {
        j = i + 1;
        while((nums[i] + nums[j]) < target)
        {
            j++;
        }
        if ((nums[i] + nums[j]) == target)
        {
            printf("[%d, %d]\n", i, j);
            solution_Found = 1;
        }    
        else
        {
            i++;
        }
    }
    return;
}

int main(void)
{
    int returnSize = 0;
    int array[20] = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    twoSum(array, 20, 3, &returnSize);
    
    return 0;
}

