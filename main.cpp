// main.cpp
#include "Profile.h"
#include <iostream>

int main() {
  
  Profile profile = Profile();
  Post p;
  // p.hearts = 100;
  // p.captions = "Hello World";
  // profile.addPost(p);
  
  // p.hearts = 50000000;
  // p.captions = "Egg";
  // profile.addPost(p);
  // profile.printAll();
  std::string input;

  while(input != "quit"){
    std::cout << "Type 'add' to create a post. Type print to print it. Type quit to end the program.";
    std::cin >> input;

    if(input == "add"){
      std::cout << "Caption: ";
      std::string cap;
      std::cin >> cap;
      std::cout << "Number of Hearts: ";
      int heart;
      std::cin >> heart;
      while(std::cin.fail()){
        std::cout<<"Please enter a number";
        std::cin >> heart;
      }
      p.hearts = heart;
      p.captions = cap;
      profile.addPost(p);
    }
    if (input == "print"){
      profile.printAll();
    }
  }
  
}