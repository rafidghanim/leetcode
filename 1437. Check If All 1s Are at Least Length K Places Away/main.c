#include <stdio.h>
#include <stdbool.h>
bool kLengthApart(int* nums, int numsSize, int k) {
    int last = -1;
    for (int i = 0;i<numsSize;i++){
        if (nums[i]==1){
            if (last!=-1 && i - last -1 < k){
                return false;
            }
            last = i;
        }
    }
    return true;
}
int main(){
	int nums[8] = {1,0,0,0,1,0,0,1};
	int numsSize = 8;
	int k = 2;
	printf("%d ",kLengthApart(nums,numsSize,k));
}
