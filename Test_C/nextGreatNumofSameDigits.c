//
//  nextGreatNumofSameDigits.c
//  Test_C
//   http://www.geeksforgeeks.org/find-next-greater-number-set-digits/
//  Created by Vikranth Posa on 26/11/15.
//  Copyright (c) 2015 Vikranth Posa. All rights reserved.
//

#include "common.h"


void reverseArrayElements(char *arr, int start, int end)
{
    while (start <= end) {
        swap(arr, start, end);
        start++;
        end--;
    }
    
}

int findNextMax(char *arr)
{
    int smallest,i,j;
    int size = (int) strlen(arr);
    
    if (size <= 1)
        return -1;
    
    //find a smaller than the digit next to it search from last, if not found return -1
    for (i=size-1; i>0; i--) {
        if (arr[i] <= arr[i-1]) {
            continue;
        }
        break;
    }
    if (i == 0)
        return -1;
    
    //find a digit greater than i from all the digits right to i
    smallest = i;
    for (j = i ; j<size; j++) {
        if ((arr[j] > arr[i-1]) && (arr[j]<arr[smallest])) {
            smallest = j;
        }
    }
    
    swap(arr, i-1, smallest);
    reverseArrayElements(arr, i, (int)strlen(arr)-1);
    return 0;
}

/*
int main()
{
    char arr [] = "3212";
    int nextMax = findNextMax(arr);
    
    if (nextMax == -1) {
        printf("Next Greater Num Cannot Exist");
    } else {
        printf("Next Greateer NUm = ");
        puts(arr);
    }
    return 0;
}
*/




