#include <iostream>
#include <string>

int main()
{
  int cases;
  std::cin >> cases;

  for(int i = 0; i < cases; i++)
  {
    bool letters_used[26];
    unsigned long long prices[26];
    unsigned long long sum;
    std::string text;

    sum = 0;

    for(int j = 0; j < 26; j++)
    {
      letters_used[j] = false;
      std::cin >> prices[j];
    }

    std::cin >> text;

    for(int j = 0; j < text.size(); j++)
    {
      letters_used[text[j]-'a'] = true;
    }

    for(int j = 0; j < 26; j++)
    {
      if(!letters_used[j])
      {
        sum += prices[j];
      }
    }

    std::cout << sum << std::endl;
  }

  return 0;
}
