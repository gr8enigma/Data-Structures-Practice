// https://leetcode.com/problems/jump-game/
#include <stdbool.h>
#include <stdio.h>
#define MAX 3

bool canJump(int* nums, int numsSize)   {
    int j = 0;
    int i = 0;
    if(nums[0] == 0 && numsSize == 1)
        return 1;
    else if(nums[0] == 0)
        return 0;
    while(i < numsSize && j >= 0) {
        i++;
        if(i < numsSize && nums[i] == 0)    {
            int distance = 0;
            while((i + distance) < numsSize && nums[i + distance] == 0)  {
                distance++;
            }
            j = i - 1;
            if(i + distance == numsSize)    {
                while(j >= 0 && (nums[j] + j) < i + distance - 1)
                                    j -= 1;
            }
            else    {
                while(j >= 0 && (nums[j] + j) < i + distance)
                                    j -= 1;                
            }
            if(j > 0)
                i++;
        }
    }
    return (j >= 0);
}

int main(void)  {
    int array[MAX] = {2,0,2};
    printf("Result is %d\n", canJump(array, MAX));
    return 0;
}