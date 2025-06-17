double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int newArr[nums1Size+nums2Size];
	for(int i=0; i<nums1Size; i++) {
		newArr[i] = nums1[i];
	}
	for(int i=0; i<nums2Size; i++) {
		newArr[i+nums1Size] = nums2[i];
	}
	int size=nums1Size+nums2Size;
    int temp;
	for(int i=0; i<size-1; i++) {
		for(int j=i+1; j<size; j++) {
			if(newArr[i] > newArr[j]) {
				temp = newArr[i];
				newArr[i] = newArr[j];
				newArr[j] = temp;
			}
		}
	}
	double median;
	if(size%2==0) {
		median = newArr[size/2] + newArr[(size/2)-1];
		median /= 2.0;
		return median;
	}
	else {
		size--;
		median = newArr[size/2];
		return median;
	}
}