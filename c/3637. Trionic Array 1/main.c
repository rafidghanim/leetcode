bool isTrionic(int* nums, int numsSize) {
    if (numsSize<4){
        return false;
    }
    int ph = 0;
    for (int i = 1;i<numsSize;i++){
        if (nums[i]==nums[i-1]){
            return false;
        } 
        if (nums[0]>nums[1]){
            return false;
        }
        if (ph == 0){
            if (nums[i] > nums[i-1]){
                continue;
            } else {
                ph = 1;
            }
        } else if (ph == 1){
            if (nums[i] < nums[i-1]){
                continue;
            } else {
                ph = 2;
            } 
            } else {
                if (nums [i]<= nums[i-1]){
                    return false;
                }
        }
    }
    return ph == 2;
}