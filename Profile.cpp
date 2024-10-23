#include <iostream>
#include "Profile.h"
Profile::Profile(int s, int c, Post *l){
  size = s;
  cap = c;
  list = l;
}
Profile::Profile(){
  size = 0;
  cap = 10;
  list = new Post[cap];
}
void Profile::printAll(){
  for(int i = 0; i < size; i++){
    std:: cout << "post " << i + 1 << "\n";
    std::cout << list[i].captions << "\n";
    std::cout << list[i].hearts << "\n";
  }
}
void Profile::addPost(Post one){
  if(size >= cap){
    cap *= 2;
    Post *temp = list;
    list = new Post[cap];
    for(int i = 0; i < size; i++){
      list[i] = temp[i];
    }
    delete [] temp;
  }
  list[size] = one;
  size++;
}