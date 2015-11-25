//
//  main.c
//  Test_C
//
//  Created by Vikranth Posa on 16/11/15.
//  Copyright (c) 2015 Vikranth Posa. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "checkEditDistance.h"



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


