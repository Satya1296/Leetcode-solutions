int findGCD(int* nums, int numsSize) {
    int max=nums[0];
    for(int i=0;i<numsSize;i++){
        if(max<nums[i]){
            max=nums[i];
        }
    }
    int min=nums[0];
    for(int i=0;i<numsSize;i++){
        if(min>nums[i]){
            min=nums[i];
        }
    }
    while(max!=0){
        int temp=max;
        max=min%max;
        min=temp;
    }
    return min;
}