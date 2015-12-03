//http://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
//  permutaionsOfString.c
//  Test_C
//
//  Created by Vikranth Posa on 03/12/15.
//  Copyright (c) 2015 Vikranth Posa. All rights reserved.
//

#include "common.h"

void permutate(char str[], int start, int end)
{
    if (start == end) {
        puts(str);
        return;
    }
    for (int i=start; i<end; i++) {
        swap(str,start,i);
        permutate(str, start+1, end);
        swap(str, start,i);
    }
    
}

int main()
{
    char arr[3] = "abc";
    permutate(arr, 0, (int)strlen(arr));
    return 0;
}
