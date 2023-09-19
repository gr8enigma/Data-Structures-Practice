#include <stdio.h>
#define MAX 7

int maxArea(int* height, int heightSize)    {
    int current_max_area = 0;
    int current_area = 0;
    int h_l = 0; 
    int h_r = heightSize - 1;
    while(h_l < h_r)
    {
        current_area = (height[h_l] < height[h_r] ? (h_r - h_l) * height[h_l] : (h_r - h_l) * height[h_r]);
        if (current_area > current_max_area)
            current_max_area = current_area;
        if (height[h_l] < height[h_r])
            ++h_l;
        else
            --h_r;
    }
    return current_max_area;
}


int main(void)  {
    int height[MAX] = {2,3,4,5,18,17,6};
    int heightSize = MAX;
    int area = 0;
    area = maxArea(height, heightSize);
    printf("Area is: %d\n", area); 
    return 0;
}