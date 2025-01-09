#include<iostream>
using namespace std;

void findTwoSumIndices(int nums[], int len, int target) {
    for (int l = 0; l < len; l++) {
        for (int m = l + 1; m < len; m++) {
            if (nums[l] + nums[m] == target) {
                cout << "[" << l << ", " << m << "]" << endl;
                return; 
            }
        }
    }
}
int main() {
 
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    cout << "Example 1 Output: ";
    findTwoSumIndices(nums1, 4, target1);

    
    int nums2[] = {3, 2, 4};
    int target2 = 6;
    cout << "Example 2 Output: ";
    findTwoSumIndices(nums2, 3, target2);

    
    int nums3[] = {3, 3};
    int target3 = 6;
    cout << "Example 3 Output: ";
    findTwoSumIndices(nums3, 2, target3);
 return 0;
}
