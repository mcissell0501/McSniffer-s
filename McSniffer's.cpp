#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

void options() {
  string choice;
  cout << "=== Welcome to McSniffer's! ===" << endl;
  cout<<"1. Fries" << endl;
  cout<<"2. Nuggets" << endl;
  cout<<"3. McCheesey" << endl;
  cout << "4. Exit and place order" << endl;
  cout << "Pick your options: ";
  cin >> choice;
if (choice == "1") {
  cout << "Fries added";
  options();
} else if (choice == "2") {
  cout << "Nuggets added";
  options();
} else if (choice == "3") {
  cout << "McCheesey added";
  options();
} else if (choice == "4") {
  cout << "Fries are $1.59";
  cout << "Nuggets are $1.58" << endl;|
  cout << "McCheesey are $2.00" << endl;
  cout << "Please use a Calculator to see how much it is to pay" << endl;
  cout << "Email mcsniffersfastfood@icloud.com to tell your order and cost of your order" << endl; I cout << "Bye and thanks for ordering!" << endl;
} else {
    cout << "" << endl;
  }
}

int main() {
  string choice;
  cout << "=== Welcome to McSniffer's! ===" << endl;
  cout<<"1. Fries" << endl;
  cout<<"2. Nuggets" << endl;
  cout<<"3. McCheesey" << endl;
  cout << "4. Exit and place order" << endl;
  cout << "Pick your options: ";
  cin >> choice;
if (choice == "1") {
  cout << "Fries added";
  options();
} else if (choice == "2") {
  cout << "Nuggets added";
  options();
} else if (choice == "3") {
  cout << "McCheesey added";
  options();
} else if (choice == "4") {
  cout << "Fries are $1.59";
  cout << "Nuggets are $1.58" << endl;|
  cout << "McCheesey are $2.00" << endl;
  cout << "Please use a Calculator to see how much it is to pay" << endl;
  cout << "Email mcsniffersfastfood@icloud.com to tell your order and cost of your order" << endl; I cout << "Bye and thanks for ordering!" << endl;
} else {
    cout << "" << endl;
  }
}