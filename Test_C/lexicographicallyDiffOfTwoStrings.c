
// http://www.geeksforgeeks.org/compare-two-strings-represented-as-linked-lists/
//  lexicographicallyDiffOfTwoStrings.c
//  Test_C
//
//  Created by Vikranth Posa on 25/11/15.
//  Copyright (c) 2015 Vikranth Posa. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int getLowerAsciValue(char ch)
{
    int diff = 'A'-'a';
    if (ch >='a' &&  ch<='z') {
        return ch;
    }
    else if (ch>='A' && ch<='Z') {
        return ch-diff;
    }
    return ch;
}

int getLexiDiff(char str1[], char str2[])
{
    int l1 = (int) strlen(str1);
    int l2 = (int) strlen(str2);
    int i;
    for (i=0; (i<l1 && i<l2); i++) {
        if (getLowerAsciValue(str1[i]) - getLowerAsciValue(str2[i])) {
            return ((str1[i] - str2[i])>0?1:-1);
        }
    }
    
    if (l1==l2) {
        return 0;
    } else {
        return ((l1-l2)>0?1:-1);
    }
    
}

/*
int main()
{
    char str1[] = "vikr";
    char str2[] = "VIK!R";
    int lexiDiff = getLexiDiff(str1,str2);
    printf("LexiCographical Difference = %d" , lexiDiff);
    return 0;
    
}
 */

