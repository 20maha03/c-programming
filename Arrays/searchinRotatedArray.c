#include <stdio.h>

int searchInRotatedArray(int arr[] ,int size, int target);

int main() {
    int size;
    printf("enter size\n");
    scanf("%d",&size);
    printf("enetr array elements\n");
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enetr target\n");
    scanf("%d",&target);
    int result = searchInRotatedArray(arr, size, target);
    printf("result = %d",result);

}
int searchInRotatedArray(int arr[] ,int size, int target) {
   int low = 0;
   int high = size - 1;

   while (low <= high) {
       int mid = low + (high - low) / 2;

       if (arr[mid] == target) {
            return mid;
       }
       else if (arr[mid] >= arr[low]) {
          if (arr[low] <= target && arr[mid] >= target) {
              high = mid - 1;
          }
          else {
            low = mid + 1;
          }
       }
       else {
            if (arr[mid] <= target && arr[high] >= target) {
                low = mid + 1;
            }
            else  {
                high = mid - 1;  
            }
       }
    }
    return -1;

}