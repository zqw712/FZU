int* twoSum(int* nums, int numsSize, int target) {
    int i,j;
    int* a = malloc(sizeof(int)*2);//��̬�ڴ����
    for(i = 0; i < numsSize - 1; i++) {
        for(j = i + 1; j < numsSize; j++) {
            if(nums[i] + nums[j] == target) {
                a[0] = i;
                a[1] = j;
            }
        }
    }
    return a;
}