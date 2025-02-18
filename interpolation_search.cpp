#include <stdio.h>
  
int interpolationSearch(int numbers[], int low, int high, int key)
{
    int pos;
    
    
    if (low <= high && key >= numbers[low] && key <= numbers[high]) {
        
        
        pos = low
              + (((double)(high - low) / (numbers[high] - numbers[low]))
                 * (key - numbers[low]));
  
        
        if (numbers[pos] == key)
            return pos;
  
        
        if (numbers[pos] < key)
            return interpolationSearch(numbers, pos + 1, high, key);
  
        
        if (numbers[pos] > key)
            return interpolationSearch(numbers, low, pos - 1, key);
    }
    return -1;
}
  

int main()
{
    
    
    int numbers[] = {10,12,13,16,18,19,20,21,22,23,24,33,35,42,47};
    int n = sizeof(numbers) / sizeof(numbers[0]);
  
    int key = 18; 
    int index = interpolationSearch(numbers, 0, n - 1, key);
  
    
    if (index != -1)
        printf("Element found at index %d",index);
    else
        printf("Element not found.");
    return 0;
}
