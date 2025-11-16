#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool check_if(int* nums,int numsSize,int target){
    for (int i = 0;i<numsSize;i++){
        if (nums[i]==target){
            return true;
        }
    }
    return false;
}

int searchInsert(int* nums, int numsSize, int target) {
    bool check = check_if(nums,numsSize,target);
    if (check){
	for (int i =0;i<numsSize;i++){
			if(nums[i]==target){
				return i;
			}
		}
	} else{
	for (int i = 0;i<numsSize;i++){
		if (target<nums[i]){
			return i;
		} else{
			return numsSize;
		}
	}
	}
	return 0;
}

int main(){

	int nums[] = {1,3,5,6};
	int target = 0;
	int numsSize = 4;
	printf("%d ",searchInsert(nums,numsSize,target));
	
}
