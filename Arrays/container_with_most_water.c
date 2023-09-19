#include <stdio.h>
#define MAX 9


int returnSmaller(int value_1, int value_2) {
    if(value_1 < value_2)
        return value_1;
    else
        return value_2;
}

int maxArea(int* height, int heightSize)    {
    int current_max_area = 0;
    int current_min_height = 0;
    int current_area = 0;
    for(int i = 0; i < heightSize - 1; i++) {
        for(int j = i + 1; j < heightSize; j++) {
            current_min_height = returnSmaller(height[i], height[j]);
            current_area = current_min_height * (j - i);
            if(current_area > current_max_area) {
                current_max_area = current_area;
            }
        }
    }
    return current_max_area;
}


int main(void)  {
    int height[MAX] = {1,8,6,2,5,4,8,3,7};
    int heightSize = MAX;
    int area = 0;
    area = maxArea(height, heightSize);
    printf("Area is: %d\n", area); 
    return 0;
}