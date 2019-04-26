#include <iostream>
#include <iomanip>
#include <fstream>

int		main(int argc, char **argv)
{
  std::ifstream inFile;
    
   inFile.open(argv[1]);
   if (!inFile)
     {
       std::cout << "Unable to open file";
       exit(1);
     }
   inFile.close();
  std::cout<<"Hello"<<std::endl;
  return 0;
}
