#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    vector<string> song{
        "Happy", "birthday", "to", "you",
        "Happy", "birthday", "to", "you",
        "Happy", "birthday", "to", "Rujia",
        "Happy", "birthday", "to", "you"};

    vector<string> names(100);

    int song_index{0};
    int name_index{0};

    int n{};
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> names[i];
        cout << names[i] << ": " << song[song_index++] << endl;
        song_index %= song.size();
    }

    if(song_index != 0){
        for(int i = song_index; i < song.size(); ++i){
            cout << names[name_index++] << ": " << song[i] << endl;
            name_index %= n;
        }
    }

    return 0;
}
