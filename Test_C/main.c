//
//  main.c
//  Test_C
//
//  Created by Vikranth Posa on 16/11/15.
//  Copyright (c) 2015 Vikranth Posa. All rights reserved.
//

#include <stdio.h>
#include <string.h>

/*
void ReverseString(char * string)
{
    unsigned long int len = strlen(string);
    
    if (len == 0) {
        return;
    }
    
    char temp;
    
    for ( int i=0; i<len/2; i++) {
        temp = string[i];
        string[i] = string[len-i-1];
        string[len-i-1] = temp;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char src[] = "a";
    printf("%s \n", src);
    ReverseString(src);
    printf("%s \n", src);
    printf("vikranth");
    return 0;
}
*/

//#include "test_2.h"














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




int main()
{
    
    char *s1 = "geek";
    char *s2 = "geeks";
    
    unsigned long int n = checkEditDistance(s1,s2);
    if (n<=1) {
        printf("distance  is not more than 1 ");
    }
    else
    {
        printf("distance = %ld , ie., is more than 1",n);
    }
    return 0;
}


