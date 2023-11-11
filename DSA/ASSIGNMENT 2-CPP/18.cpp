findMedianOfMedians(arr, left, right)
    if (right - left < 5)
        return median(arr, left, right)
    
    // Divide the array into groups of 5
    for i = left to right by 5
        groupMedian = findMedianOfMedians(arr, i, i+4)
        swap(arr[groupMedian], arr[left + (i-left)/5])
    
    // Recursively find the median of medians
    mid = (left + right) / 2
    medianOfMedians = findMedianOfMedians(arr, left, left + (right-left)/5)
    
    // Partition the array around the median of medians
    pivotIndex = partition(arr, left, right, medianOfMedians)
    
    // If the pivot is the middle element, return it
    if (pivotIndex == mid)
        return arr[pivotIndex]
    // If the pivot is to the left of the middle element, recurse on the right half
    else if (pivotIndex < mid)
        return findMedianOfMedians(arr, pivotIndex+1, right)
    // If the pivot is to the right of the middle element, recurse on the left half
    else
        return findMedianOfMedians(arr, left, pivotIndex-1)

# O(n) 
