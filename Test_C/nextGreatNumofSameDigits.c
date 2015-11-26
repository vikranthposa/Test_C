//
//  nextGreatNumofSameDigits.c
//  Test_C
//   http://www.geeksforgeeks.org/find-next-greater-number-set-digits/
//  Created by Vikranth Posa on 26/11/15.
//  Copyright (c) 2015 Vikranth Posa. All rights reserved.
//

#include <stdio.h>

int findDipInxFromLast(int *arr, int size)
{
    int curInd = size-2;
    while (curInd >= 0) {
        if (arr[curInd] < arr[curInd+1]) {
            break;
            }
        curInd--;
    }
    return curInd;
}

int findNextBigDigit(int *arr ,int size, int startIndx)
{
    int nxtBigInd = startIndx + 1;
    for (int i = startIndx+1 ; i<size; i++) {
        if ( (arr[i] > arr[startIndx]) && (arr[i]<arr[nxtBigInd])) {
            nxtBigInd = i;
        }
    }
    return nxtBigInd;
}

void swap(int *arr , int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void reverseArrayElements(int *arr, int startIndx, int lastIndx)
{
    while (startIndx <= lastIndx) {
        swap(arr, startIndx++, lastIndx--);
    }
    
}

int findNextMax(int *arr, int size)
{
    if (size ==0 || size ==1) {
        return -1;
    }
    int dipIdx = findDipInxFromLast(arr, size);
    if (dipIdx == -1)
        return -1;
    
    int nextBigDigitIdx = findNextBigDigit(arr, size, dipIdx);
    swap(arr, dipIdx, nextBigDigitIdx);
    reverseArrayElements(arr, dipIdx+1, size-1);
    return 0;
}

/*
int main()
{
    int arr [] = {5,3,4,9,7,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int nextMax = findNextMax(arr,size);
    
    if (nextMax == -1) {
        printf("Next Greater Num Cannot Exist");
    } else {
        printf("Next Greateer NUm = ");
        for (int i=0; i<size; i++) {
            printf("%d",arr[i]);
        }
    }
    return 0;
}
 */

