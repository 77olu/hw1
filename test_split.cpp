/*
CSCI 104: Homework 1 Problem 1

Use this file to test your split.cpp file.

Create linked lists and split them with your split() function.

You can compile this file like this:
g++ split.cpp test_split.cpp -o test_split
*/

#include "split.h"
#include <cstddef>
#include <vector>
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
  Node* Main = nullptr;
  Node* Tail = nullptr;
  Node* List1 = nullptr;
  Node* List2= nullptr;
  vector <int> nums = {2,4,5,6,7,3,8,9,12};
  for(size_t i=0; i<nums.size(); i++){
    Node* newNode = new Node(nums[i], nullptr);
    if(Main == nullptr){
      Main = newNode;
      Tail = newNode;
    }else{
      Tail->next = newNode;
      Tail = newNode;
    }
    }
  split(Main,List1, List2);
  for(Node* dummy = List1; dummy!= nullptr; dummy =dummy->next ){
    cout << dummy->value << " " << endl;
  }
  for(Node* dummy = List2; dummy!= nullptr; dummy =dummy->next ){
    cout << dummy->value << " " << endl;
  }

}
