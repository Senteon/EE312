#include<stdio.h>
#include<stdbool.h>
int hammingDistance(int aList[], int bList[], int len);
int sum3or5Multiples();
bool lastDigit(int, int);
int reverseInt(int); 

// CodeCampTester.c -- EE 312 Project 1 -- Tester class

/* Student information for assignment:
 * 
 * Name: Bilal Quraishi
 * email address: bilal.quraishi@utexas.edu
 * UTEID: buq57
 * Section 5 digit ID: 16210
 * Number of slip days used on this assignment: 0
 */

int main() 
{
  
//test 1 hamming - Bilal
  int h1[] = {39845, 23, 4598, 4888};
  int h2[] = {999, 23, 77, 4888};
  int expected = 2;
  int actual = hammingDistance(h1, h2, 4);
  printf("Test 1 hamming distance: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  printf("Passed test 1, hamming distance.\n\n");
  else printf("**** FAILED **** test 1, hamming distance.\n\n");

//test 2 hamming - Bilal
  int h3[] = {0, 932487};
  int h4[] = {0, 777777}; 
  expected = 1;
  actual = hammingDistance(h3, h4, 2);
  printf("Test 2 hamming distance: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  printf("Passed test 2, hamming distance.\n\n");
  else printf("**** FAILED **** test 2, hamming distance.\n\n");


  // test 3 last digit - Bilal
  int n1 = 888885;
  int n2 = 88888885;
  expected = true;
  actual = lastDigit(n1, n2);
  printf("Test 3 last digit: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  printf("Passed test 3, last digit.\n\n");
  else printf("**** FAILED **** test 3, last digit.\n\n");

  // test 4 last digit - Bilal
  n1 = -200004;
  n2 = 4;
  expected = true;
   actual = lastDigit(n1, n2);
  printf("Test 4 last digit: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  printf("Passed test 5, last digit.\n\n");
  else printf("**** FAILED **** test 4, last digit.\n\n");

  // test 5 sum of multiples of 3 or 5
  expected = 233168;
  actual = sum3or5Multiples();
  printf("Test 5 sum of multiples: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  printf("Passed test 5, sum of multiples of 3 or 5.\n\n");
  else printf("**** FAILED **** test 5, sum of multiples of 3 or 5.\n\n");

  // test 6 reverse int - Bilal
  n1 = -100000;
  expected = -1;
  actual = reverseInt(n1);
  printf("Test 6 reverse int: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  printf("Passed test 6, reverse int.\n\n");
  else printf("**** FAILED **** test 6, reverse int.\n\n");

  // test 7 reverse int
  n1 = 1999999999;
  expected = 0;
  actual = reverseInt(n1); 
  printf("Test 7 reverse int: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  printf("Passed test 7, reverse int.\n\n");
  else printf("**** FAILED **** test 7, reverse int.\n\n");
}
