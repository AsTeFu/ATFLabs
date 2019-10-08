#include <iostream>
#include "../inlcude/Program.h"
#include "../inlcude/Utility.h"

int main() {
  Program program;
  int key = 0;

  while (true) {
    program.printMenu();
    std::cout << std::endl;
    program.print();
    key = Utility::getNumber("\nSelect menu item: ");
    if (key > 8 || key < 1) break;
    program.invoke(key);
  }



  return 0;
}
