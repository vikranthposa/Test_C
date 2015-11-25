//
//  checkEditDistance.h
//  Test_C
//
//  Created by Vikranth Posa on 25/11/15.
//  Copyright (c) 2015 Vikranth Posa. All rights reserved.
//

#ifndef __Test_C__checkEditDistance__
#define __Test_C__checkEditDistance__

#include <stdio.h>
#include <string.h>
unsigned long int  checkEditDistance(char *s1, char *s2);

#endif /* defined(__Test_C__checkEditDistance__) */


/*
link --  http://www.geeksforgeeks.org/check-if-two-given-strings-are-at-edit-distance-one/

Check if edit distance between two strings is one
An edit between two strings is one of the following changes.

Add a character
Delete a character
Change a character
Given two string s1 and s2, find if s1 can be converted to s2 with exactly one edit. Expected time complexity is O(m+n) where m and n are lengths of two strings.

Examples:

Input:  s1 = "geeks", s2 = "geek"
Output: yes
Number of edits is 1

Input:  s1 = "geeks", s2 = "geeks"
Output: no
Number of edits is 0

Input:  s1 = "geaks", s2 = "geeks"
Output: yes
Number of edits is 1

Input:  s1 = "peaks", s2 = "geeks"
Output: no
Number of edits is 2
*/