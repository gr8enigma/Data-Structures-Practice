//https://leetcode.com/problems/remove-element/
#include <stdio.h>
#define MAX 5

int removeElement(int* nums, int numsSize, int val) {
    unsigned char count = 0;
    for(unsigned char i = 0; i < numsSize; i++)   {
        if(nums[i] != val)    {
            nums[count] = nums[i];
            count += 1;
        }
    }
    // for(unsigned char i = count; i < numsSize; i++)
    //     nums[i] = 0;
    return count;
}


int main(void)  {
    int array[MAX] = {3,2,2,3,4};
    for(int i = 0; i < MAX; i++)    {
        printf("%d", array[i]);
    }
    printf("\nAFTER\n");
    int k = removeElement(array, MAX, 3);
    for(int i = 0; i < MAX; i++)    {
        printf("%d", array[i]);
    }
    printf("\nk is: %d", k);
    return 0;
}