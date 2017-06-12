#include <iostream>
#ifndef NODE_H
#define NODE_H

//Class Definition for Node class

class Node{
 public:
  Node();
  ~Node();
  Node* getNext();
  void setNext(Node* newNext);
  int getId();
  float getGpa();
  char* getFirst();
  char* getLast();
  void setId(int newid);
  void setGpa(float newfloat);
  void setFirst(char first[50]);
  void setLast(char last[50]);
 private:
  
  Node* next;
  int id;
  float gpa;
  char first[50];
  char last[50];
};
#endif
