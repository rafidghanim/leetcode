void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int l = m+n -1;

    while (m>0 && n>0){
        if (nums1[m-1] > nums2[n -1]){
            nums1[l] = nums1[m-1 ];
            m-=1;
        }
        else {
            nums1[l] = nums2[n -1];
            n-=1;
        } l -= 1;
    }
    while (n>0){
        nums1[l] =nums2[n-1];
        n = n-1;
        l = l-1;
    }
}
