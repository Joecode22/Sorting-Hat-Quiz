#include <iostream>
#include <limits>

int main () {

  // Team score tracker variables
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  // Stores each of the answers to the four quiz questions
  int answer1;
  int answer2;
  int answer3;
  int answer4;

  // Question 1
  std::cout << "\nThe Sorting Hat Quiz!\n\n";
  std::cout << "Q1) When I'm dead, I want people to remember me as: \n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n";

  while (true) {
    // Use std::cin to receive an input from the user and store it in answer1
    std::cout << "\nWrite your answer choice as a positive integer between 1 and 4\n";
    std::cin >> answer1;

    // Check if the input is within the valid range
    if (answer1 >= 1 && answer1 <= 4) {
      // Scoring conditional for question 1
      switch(answer1) {
        case 1:
          hufflepuff++;
          std::cout << "One point to House Hufflepuff!\n";
          break;
        case 2:
          slytherin++;
          std::cout << "One point to House Slytherin!\n";
          break;
        case 3:
          gryffindor++;
          std::cout << "One point to House Gryffindor!\n";
          break;
        case 4:
          ravenclaw++;
          std::cout << "One point to House Ravenclaw!\n";
          break;
        default:
          std::cout << "Invalid input";
          break;
      }
      break; // Break out of the loop once a valid input is received
    } else {
      std::cout << "Invalid input. You did not enter a positive integer between 1 and 4.\n";
      // Clear the error state of cin in case of an invalid input
      std::cin.clear();
      // Ignore the rest of the current line to avoid further input issues
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }

  // Question 2
  std::cout << "Q2) Dawn or Dusk?: \n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n";
  while (true) {
    // Use std::cin to receive an input from the user and store it in answer1
    std::cout << "\nWrite your answer choice as a positive integer between 1 and 2\n";
    std::cin >> answer2;

    // Check if the input is within the valid range
    if (answer2 >= 1 && answer2 <= 2) {
      // Scoring conditional for question 1
      switch(answer2) {
        case 1:
          gryffindor++;
          ravenclaw++;
          std::cout << "One point to both House Ravenclaw and Gryffindor!\n";
          break;
        case 2:
          hufflepuff++;
          slytherin++;
          std::cout << "One point to both House Slytherin and Hufflepuff!\n";
          break;
        default:
          std::cout << "Invalid input";
          break;
      }
      break; // Break out of the loop once a valid input is received
    } else {
      std::cout << "Invalid input. You did not enter a positive integer between 1 and 2.\n";
      // Clear the error state of cin in case of an invalid input
      std::cin.clear();
      // Ignore the rest of the current line to avoid further input issues
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }

  // Question 3
  std::cout << "Which kind of intrument most pleases your ear\n";
  std::cout << "1) The violin\n";
  std::cout << "2) The trumpet\n";
  std::cout << "3) The piano\n";
  std::cout << "4) The drum\n";
  while (true) {
    // Use std::cin to receive an input from the user and store it in answer1
    std::cout << "\nWrite your answer choice as a positive integer between 1 and 4\n";
    std::cin >> answer3;

    // Check if the input is within the valid range
    if (answer3 >= 1 && answer3 <= 4) {
      // Scoring conditional for question 1
      switch(answer3) {
        case 1:
          slytherin++;
          std::cout << "One point to House Slytherin!\n";
          break;
        case 2:
          hufflepuff++;
          std::cout << "One point to House Hufflepuff!\n";
          break;
        case 3:
          ravenclaw++;
          std::cout << "One point to House Ravenclaw!\n";
          break;
        case 4:
          gryffindor++;
          std::cout << "One point to House Gryffindor!\n";
          break;
        default:
          std::cout << "Invalid input";
          break;
      }
      break; // Break out of the loop once a valid input is received
    } else {
      std::cout << "Invalid input. You did not enter a positive integer between 1 and 4.\n";
      // Clear the error state of cin in case of an invalid input
      std::cin.clear();
      // Ignore the rest of the current line to avoid further input issues
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }

  // Question 4
  std::cout << "Q1) Which road tempts you most?\n";
  std::cout << "1) The wide, sunny grassy lane\n";
  std::cout << "2) The narrow, dar, lantern-lit alley\n";
  std::cout << "3) The twisting, leaf-strewn path through woods\n";
  std::cout << "4) The cobbled street lined (ancient buildings)\n";

  while (true) {
    // Use std::cin to receive an input from the user and store it in answer1
    std::cout << "\nWrite your answer choice as a positive integer between 1 and 4\n";
    std::cin >> answer4;

    // Check if the input is within the valid range
    if (answer4 >= 1 && answer4 <= 4) {
      // Scoring conditional for question 1
      switch(answer4) {
        case 1:
          hufflepuff++;
          std::cout << "One point to House Hufflepuff!\n";
          break;
        case 2:
          slytherin++;
          std::cout << "One point to House Slytherin!\n";
          break;
        case 3:
          gryffindor++;
          std::cout << "One point to House Gryffindor!\n";
          break;
        case 4:
          ravenclaw++;
          std::cout << "One point to House Ravenclaw!\n";
          break;
        default:
          std::cout << "Invalid input";
          break;
      }
      break; // Break out of the loop once a valid input is received
    } else {
      std::cout << "Invalid input. You did not enter a positive integer between 1 and 4.\n";
      // Clear the error state of cin in case of an invalid input
      std::cin.clear();
      // Ignore the rest of the current line to avoid further input issues
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }
  int max = 0;
  std::string house;

  if (gryffindor > max) {
  
  max = gryffindor;
  house = "Gryffindor";
  
}

if (hufflepuff > max) {

  max = hufflepuff;
  house = "Hufflepuff";
  
}

if (ravenclaw > max) {
  
  max = ravenclaw;
  house = "Ravenclaw";
  
}

if (slytherin > max) {
  
  max = slytherin;
  house = "Slytherin";
  
}

std::cout << "Which house shall we place you in? ... Better be ...\n";
std::cout << house << "!\n";
  
  
}
