/*Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7
*/
#include <stdio.h>

int main() 
{
    int m, n;
    
    printf("Enter size of first array: ");
    scanf("%d", &m);
    
    int nums1[m];
    printf("Enter %d elements for first array:\n", m);
    for(int i = 0; i < m; i++)
        scanf("%d", &nums1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);
    
    int nums2[n];
    printf("Enter %d elements for second array:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &nums2[i]);

    int i = 0, j = 0;
    
    printf("Merged Sorted Array:\n");
    while(i < m && j < n) 
    {
        if(nums1[i] < nums2[j]) 
        {
            printf("%d ", nums1[i]);
            i++;
        } else {
            printf("%d ", nums2[j]);
            j++;
        }
    }

    while(i < m) 
    {
        printf("%d ", nums1[i]);
        i++;
    }

    while(j < n) 
    {
        printf("%d ", nums2[j]);
        j++;
    }

    return 0;
}
