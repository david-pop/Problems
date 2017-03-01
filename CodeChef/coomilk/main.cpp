#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {

  int testCases;
  cin >> testCases;

  for(int i = 0; i < testCases; i++){
    int minutes;
    cin >> minutes;

    vector<string> actions;

    for(int ii = 0; ii < minutes; ii++){
      string coomilk;
      cin >> coomilk;

      actions.push_back(coomilk);
    }

    string lastAction;
    auto actionsIter = actions.begin();
    lastAction = *actionsIter;
    actionsIter++;

    while(actionsIter != actions.end()){
      if(lastAction.compare("cookie") == 0
      && (*actionsIter).compare("cookie") == 0){
        break;
      }

      lastAction = *actionsIter;

      actionsIter++;
    }

    if(lastAction.compare("cookie") == 0){
      cout << "NO" << endl;
    }else{
      cout << "YES" << endl;
    }
  }

  return 0;
}
