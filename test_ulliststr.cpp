#include <string>
#include <vector>
#include <iostream>
#include <sstream>

#include "ulliststr.h"

//Use this file to test your ulliststr implementation before running the test suite

int main(int argc, char* argv[])
{
  ULListStr dat;
  dat.push_front("Hi");
  std :: cout<< dat.get(0) << std :: endl;
  std :: cout <<"reached " << std :: endl;
  std :: cout<< dat.size() << std :: endl;
  dat.pop_front();
  std :: cout<< dat.size() << std :: endl;
  dat.push_back("Noo");
  std :: cout<< dat.get(0) << std :: endl;
  std :: cout<< dat.size() << std :: endl;
  dat.pop_back();
  std :: cout<< dat.size() << std :: endl;

}
