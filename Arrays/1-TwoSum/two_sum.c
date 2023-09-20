// https://leetcode.com/problems/two-sum/
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int solution_Found = 0;
    int i = 0;
    int j;
    int* result;
    while(i < (numsSize - 1) && !solution_Found)
    {
        j = i + 1;
        while((nums[i] + nums[j]) < target)
        {
            j++;
        }
        if ((nums[i] + nums[j]) == target)
        {
            *returnSize = 2;
            result = (int *)malloc(*returnSize * sizeof(int));
            if(result == NULL)
                return result;
            result[0] = i;
            result[1] = j;
            solution_Found = 1;
            return result;
        }    
        else
        {
            i++;
        }
    }
    return NULL;
}

int main(void)
{
    int returnSize = 0;
    int array[20] = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int* result = twoSum(array, 20, 20, &returnSize);
    printf("[%d, %d]\n", result[0], result[1]);
    
    return 0;
}

