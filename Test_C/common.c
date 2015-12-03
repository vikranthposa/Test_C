//
//  common.c
//  Test_C
//
//  Created by Vikranth Posa on 03/12/15.
//  Copyright (c) 2015 Vikranth Posa. All rights reserved.
//

#include "common.h"


void swap(char arr[], int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;    
}

