#include <bits/stdc++.h>
using namespace std;

void del(vector<string> &words, int j){
    for (int i = 0 ; i < words[j].size() ; i++ ){
        words[i].erase(words[i].begin() + j);
    }
}

void remove( vector<string> &input, int c) {
  for (int i = 0; i < input.size(); ++i)
    input[i].erase(input[i].begin()+c);
}

int main(){

    int n, m;
    string temp;
    cin>>n>>m;
    vector<string> words;

    for (int i = 0 ; i < n ; i++){
        cin>>temp;
        words.push_back(temp);
    }

    if (n == 1){
        cout<<0;
        return 0;
    }

    int deleted = 0;
    bool anyChange = true;

    while(anyChange) {
    anyChange = false;

    for (int i = 0; !anyChange && i < n-1; ++i) {
      for (int j = 0; !anyChange && j < words[i].size(); ++j) {
        if(words[i][j] > words[i+1][j]) {
          anyChange = true;
          remove(words, j);
          deleted ++;
        }
        else if(words[i][j] < words[i+1][j])
          break;
        }
    }
    }
/*
    for (int i = 0 ; i < n - 1 ; i++){
        for (int j = 0 ; j < words[i].size(); j++)
            if (words[i][j] > words[i+1][j]){
                remove(words, j);
                i = 0;
                deleted ++;
                break;
            }else if(words[i][j] < words[i+1][j]){
                break;
            }
        }
    }
*/
    cout<<deleted<<endl;
}
