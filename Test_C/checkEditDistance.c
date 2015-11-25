//
//  checkEditDistance.c
//  Test_C
//
//  Created by Vikranth Posa on 25/11/15.
//  Copyright (c) 2015 Vikranth Posa. All rights reserved.
//

#include "checkEditDistance.h"

unsigned long int  checkEditDistance(char *s1, char *s2)
{
    unsigned long int l1 = strlen(s1);
    unsigned long int l2 = strlen(s2);
    unsigned long int  i = l1-l2;
    if (!(i==0 || i==1 || i==-1)) {
        return i;
    }
    
    int changeCount = 0;
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 == *s2) {
            s1++; s2++;
            continue;
        }
        changeCount++;
        if (changeCount!=1) {
            return changeCount;
        }
        if (l1 > l2)
            s1++;
        else if (l1<l2)
            s2++;
        else
        {
            s1++; s2++;
        }
        
    }
    return changeCount;
}