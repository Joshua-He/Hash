#include <iostream>
#include <string.h>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include "Hash.h"

using namespace std;

void createTable(Node** &hashTable, int size);

struct student{
  char first[80];
  char last[80];
  int  id;
  float gpa;
};
int main(){
  vector<student*>* studentList;
  studentList = new(vector<student*>);
  char input[10];  
  int on = 1;
  int count =0; 
  int studentnumber;
  int deletedStudent = 0;
  while (on == 1){
    cout << "Enter command (ADD, PRINT, DELETE, type QUIT to quit): " << endl;
    cin >> input;
    if (!strcmp(input, "ADD")) {
      student* Student1;
      Student1 = new(student);
      cout << "Enter " << endl;
      
      cout << "First name: ";
      cin >> Student1->first;
      cout << "Last name: ";
      cin >> Student1->last;
      
      cout << "GPA: ";
      cin >> Student1->gpa;
      cout << "StudentID: ";
      cin >> Student1->id;
      
      studentList->push_back(Student1);
      cout << (*studentList)[count]->first << " is added" << endl << endl;
      count ++; 

    }
    
    else if (!strcmp(input, "PRINT")) {
      cout << "Total students: " << count << endl;
      
      for (int i=0; i<count; i++) {
	cout << (*studentList)[i]->first << ", "
	     << (*studentList)[i]->last << ", " 
	     << (*studentList)[i]->id << ", "
	     << setprecision (2)  << fixed << trunc(100* (*studentList)[i]->gpa) / 100 <<endl;
      }
      
    }
      
    else if (!strcmp(input, "DELETE")) {
      cout << "Enter student id of student you want to deletet" << endl;
      cin >> studentnumber;
      deletedStudent = 0;
      for (int i = 0; i < count; i++){
	if (studentnumber == (*studentList)[i]->id){
	  studentList->erase(studentList->begin()+i);
	  deletedStudent++;
	}
	
      }
      if (deletedStudent > 0){
	count = count - deletedStudent;
	cout << "record deletd" << endl;
      }
      else {
	cout << "Could not find the student by ID " << studentnumber << endl << endl;
      }
	
    }
    else if (!strcmp(input, "QUIT")) {
      on = 0;
    }

  }  
}

void studentGenerator(char array[5000], char file[200]){
  //Read in students from file
  cout << "Please enter the file name" << endl;
  cin.getline(file, 200);
  infile.open(file);
  if(file.is_open()){
    file.getline(array, 5000);
    file.close();
  }
  //File cannot be opened
  
  else{
    cout << "Inpute file cannot be opened, please try reentering file name" << endl;
  }

  //Take the students from the file and modify their information by student ID


  //Remodulize the student IDS based on the number of students
  
}



void createTable(Node** &hashTable, int size){
  //Create hashTable which is an array of Node* with an inputted size
  hashTable = new Node*[size];
  //Initialize array to NULL
  for(int i = 0; i < size; i++){
    hashTable[i] = NULL;
  }
  
}
