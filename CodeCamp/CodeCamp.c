#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>

// CodeCamp.c -- EE 312 Project 1

/* Student information for project:
 *
 * Replace <NAME> with your name.
 *
 * On my honor, Bilal Quraishi, this programming project is my own work
 * and I have not provided this code to any other student.
 *
 * Name:  Bilal Quraishi  
 * Email Address: bilal.quraishi@utexas.edu
 * UTEID: buq57
 * Section 5 digit ID: 16210
 * Number of slip days used on this assignment: 0
 */



/* Determine the hamming distance between two int arrays.
   pre: aList != null, bList != null, aList.length == bList.length == len
   post: return hamming distance between the two arrays of ints.
   Neither parameter should be altered by this function.
*/
int hammingDistance(int aList[], int bList[], int length) 
{
  int distance = 0;                         //accumulation variable
  for (int i = 0; i < length; i++)  
  {
    if (aList[i] == bList[i]) {}          //test 
    else
    {
      distance++; 
    }
  }
  return distance;
}

/* Determine if two ints have the same last digit.
   Note that the last digit of 0 is 0 and the last digit of -12 is 2. 
   post: return true if x and y have the same last digit, false otherwise.
*/
bool lastDigit(int x, int y) 
{
  if (x < 0)                                      //negative correction
  {
    x *= -1;
  }
  if (y < 0) 
  {
    y *= -1;
  }
  if ((x % 10) == (y % 10))         //get last digits
  {
    return true;
  }
  else 
  {
    return false;
  }
}

/* Determine the sum of the positive integers less than 1000 that are multiples of 3 or 5 (or both).
   post: return the sum of the integers from 1 to 1000 that are multiples of 3 or 5 or both.
*/
int sum3or5Multiples() 
{
  int sum = 0;                                              //accumulate
  for (int i = 0; i < 1000; i++)                    
  {
    if (((i % 3) == 0 || (i % 5) == 0))           //test for multiples of 3 or 5 and accumulate
    {
      sum += i;
    }
  }
  return sum;
}

/* Reverse the digits of an integer. Return the reversed number if it is in the range of type int, 0 otherwise.
   post: return x with digits reversed if the reverse can be stored as an int, 0 otherwise.
*/
int reverseInt(int x) 
{
  int newInt = 0;
  bool isNegative;
  if (x < 0)                                            //test for negative numbers
   {  
      x *= -1; 
      isNegative = true;
  }
  else 
  {
    isNegative = false;
  }
  while (x != 0)
  {
    int tester = newInt;                     //test for overflow with this variable
    newInt *= 10;
    if ((newInt / 10) != tester)          //make sure original number is not corrupted by overflow
    {
      printf("Overflow detected.");       //error for overflow
      return 0;
    }
    int temp = (x % 10);
    x /= 10;
    newInt += temp;
  }
  if (isNegative)                                       //add back negative sign if needed
  {
    return newInt * -1;
  }
  else 
  {
    return newInt;
  }
}

  
