#include <iostream>

const unsigned long long limit = 1000000007;

int main()
{
  int cases;
  std::cin >> cases;

  for(int i = 0; i < cases; i++)
  {
    int n;
    std::cin >> n;

    unsigned long long value;
    unsigned long long sum;
    unsigned long long result;
    unsigned long long coeff;

    result = 0;
    sum = 0;
    coeff = 2;

    std::cin >> value;
    result = (result + value * sum) % limit;
    sum = (sum + (coeff * value) % limit) % limit;

    for(int j = 1; j < n + 1; j++)
    {
      std::cin >> value;
      result = ((2 * result) % limit + (value * sum) % limit) % limit;
      sum = (sum + (coeff * value) % limit) % limit;
      coeff = (coeff * 2) % limit;
    }

    std::cout << result << std::endl;
  }

  return 0;
}
