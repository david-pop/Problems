#include <iostream>
#include <unordered_map>

using namespace std;

int main(){

    int k, m, num;
    bool result;

    int coursesInCategory, minCoursesInCategory, numChosenInCategory;

    while(cin >> k && k != 0){
        cin >> m;

        unordered_map<int, bool> courses;
        result = true;

        for(int i = 0; i < k; i++){
            cin >> num;
            courses[num] = true;
        }

        for(int i = 0; i < m; i++){
            numChosenInCategory = 0;

            cin >> coursesInCategory >> minCoursesInCategory;

            for(int j = 0; j < coursesInCategory; j++){
                cin >> num;
                if (courses.find(num) != courses.end()){
                    ++numChosenInCategory;
                }
            }

            if(numChosenInCategory < minCoursesInCategory){
                result = false;
            }
        }

        if(result){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }

    return 0;
}