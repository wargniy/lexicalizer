#ifndef OUTPUT_HPP
#define OUTPUT_HPP

#include "parser.hpp"

class Output
{
  std::map<std::string, std::list<std::string> > map;

  
public:
  
  Output(Parser p) {
    this->setmyMap(p.getmyMap());
  }
  ~Output();
  
  void setmyMap(std::map<std::string, std::list<std::string> > m) { this->map = m; }
  std::map<std::string, std::list<std::string> > getmyMap() { return this->map; }
  void writeFile();
  
};

#endif // !OUTPUT_HPP
