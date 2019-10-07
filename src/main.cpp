#include <iostream>
#include <string>
#include "../inlcude/Application.h"
#include "../inlcude/FileReader.h"
#include "../inlcude/Utility.h"

int main() {
  auto list = FileReader::readArray<unsigned char>("Resource/file.txt");
  Application application(list);
  application.print();
  application.insertionSort();
  application.print();

  std::cout << "Read array again" << std::endl;
  auto list2 = FileReader::readArray<unsigned char>("Resource/file.txt");
  Application application2(list2);
  application2.print();
  application2.selectionSort();
  application2.print();

  return 0;
}
