#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int test_cases;

  cin >> test_cases;

  for(int i = 0; i < test_cases; i++){
    int n;
    bool first;
    int xenny1, xenny2, yana1, yana2;
    int temp;

    cin >> n;

    xenny1 = 0;
    xenny2 = 0;
    yana1 = 0;
    yana2 = 0;
    first = true;

    for(int j = 0; j < n; j++){
      cin >> temp;

      if(first){
        xenny1 += temp;
      }else{
        xenny2 += temp;
      }

      first = !first;
    }

    first = true;

    for(int j = 0; j < n; j++){
      cin >> temp;

      if(first){
        yana1 += temp;
      }else{
        yana2 += temp;
      }

      first = !first;
    }

    cout << (((yana1 + xenny2) < (yana2 + xenny1)) ? (yana1 + xenny2) : (yana2 + xenny1)) << endl;
  }

  return 0;
}
