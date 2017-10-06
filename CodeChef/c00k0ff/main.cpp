#include <iostream>
#include <string>
#include <map>


int main()
{
  int t;
  std::cin >> t;

  std::map<std::string, int> problems;

  for(int i = 0; i < t; i++)
  {
    int n;
    std::cin >> n;

    problems["cakewalk"] = 0;
    problems["simple"] = 0;
    problems["easy"] = 0;
    problems["easy-medium"] = 0;
    problems["medium"] = 0;
    problems["medium-hard"] = 0;
    problems["hard"] = 0;

    std::string temp;

    for(int j = 0; j < n; j++)
    {
      std::cin >> temp;
      problems[temp]++;
    }

    std::cout << ((problems["cakewalk"] > 0 &&
                  problems["simple"] > 0 &&
                  problems["easy"] > 0 &&
                  (problems["easy-medium"] > 0 || problems["medium"] > 0) &&
                  (problems["medium-hard"] > 0 || problems["hard"] > 0)) ?
                  "Yes" : "No") << std::endl;
  }
}
