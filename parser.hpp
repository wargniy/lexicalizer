#ifndef PARSER_HPP
#define PARSER_HPP

#include <string>
#include <map>
#include <list>


class Parser
{
  std::map<std::string, std::list<std::string> > map;

public:
  Parser();
  ~Parser();

  void setmyMap(std::map<std::string, std::list<std::sring> > m) { this->map = m; }
  std::map<std::string, std::list<std::string> > getmyMap() { return this->map; }
  
  
};

#endif // !PARSER_HPP
