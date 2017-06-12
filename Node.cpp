#include <iostream>
#include <string.h>
#include "Node.h"

using namespace std;

Node::Node(){
  next = NULL;
  id = 0;
  gpa = 0;
  first[0] = '\0';
  last[0] = '\0';
}

Node::~Node(){

}
  

// get next

Node* Node::getNext(){
  return next;
}

//set next

void Node::setNext(Node* newNext){
  next = newNext;
}

//getid

int Node::getId(){
  return id;
}

//getgpa

float Node::getGpa(){
  return gpa;
}

//getfirst
char* Node::getFirst(){
  return first;
}

//get lasr name
char* Node::getLast(){
  return last;
}

// set id
void Node::setId(int newid){
  id = newid;
}

//set gpa
void Node::setGpa(float newgpa){
  gpa = newgpa;
}

//setfirst
void Node::setFirst(char newfirst[50]){
  strncpy(first, newfirst, 50);
}


//setlast
void Node::setLast(char newlast[50]){
  strncpy(last, newlast, 50);
}
