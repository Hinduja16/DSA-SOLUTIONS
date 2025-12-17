#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target) {
    static int result[2];
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return NULL; // No solution
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;

    int* ans = twoSum(nums, 4, target);

    if (ans != NULL)
        printf("Indices: %d, %d\n", ans[0], ans[1]);
    else
        printf("No solution found\n");

    return 0;
}

