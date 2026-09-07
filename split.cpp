/*
CSCI 104: Homework 1 Problem 1

Write a recursive function to split a sorted singly-linked
list into two sorted linked lists, where one has the even 
numbers and the other contains the odd numbers. Students 
will receive no credit for non-recursive solutions. 
To test your program write a separate .cpp file and #include
split.h.  **Do NOT add main() to this file**.  When you submit
the function below should be the only one in this file.
*/

#include "split.h"

/* Add a prototype for a helper function here if you need */
  bool evenorodd(int x);
void split(Node*& in, Node*& odds, Node*& evens)
{
  /* Add code here */
// WRITE YOUR CODE HERE
if(in == nullptr){
  return;
}

   if(evenorodd(in->value)){
   Node* dummy = in->next;
   in->next = evens;
   evens = in;
   in = dummy;
    return split(in, odds, evens);
   } else{
   Node* dummy1 = in->next;
    in->next = odds;
    odds = in;
    in = dummy1;
    return split(in, odds, evens);
   }

}

/* If you needed a helper function, write it here */
bool evenorodd(int x){
  if(x % 2 == 0) {
    // return true if even
    return true;
  } else {
    //return false if odd
    return false;
  }
}