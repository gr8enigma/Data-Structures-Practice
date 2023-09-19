//https://leetcode.com/problems/concatenation-of-array/
#include <stdlib.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int* resulting_array = (int*)(malloc)(numsSize * 2 * sizeof(int));
    if(resulting_array == NULL)
        return NULL;
    *returnSize = numsSize * 2;
    for(int i = 0; i < *returnSize; i++)
    {
        resulting_array[i] = nums[i%numsSize];   
    } 
    return resulting_array;
}

int main(void)  {
    return 0;
}