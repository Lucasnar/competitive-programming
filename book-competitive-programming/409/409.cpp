#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<iterator>
#include<cstdio>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<iostream>
#include<map>
#include<queue>
#include<cstdlib>
#include<cstring>
#include<string>
#include<set>

using namespace std;

const int maxn = 128;

vector<string> keywords;
vector<string> excuses;
vector<string> words;
int c[maxn];

template<typename Out>
void split(const std::string &s, char delim, Out result) {
    std::stringstream ss;
    ss.str(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        *(result++) = item;
    }
}


std::vector<std::string> split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, std::back_inserter(elems));
    return elems;
}

int main(){
  int k, e, maxc, count=0;

  while(scanf(" %d %d ", &k, &e) == 2){
    //printf("%d %d\n", k, e);
    for(int i = 0; i<e; ++i)
      c[i] = 0;
    string aux;
    excuses.clear();
    keywords.clear();
    words.clear();
    maxc = -1;

    for(int i = 0; i<k; ++i){
      cin >> aux;
      cin.ignore();
      keywords.push_back(aux);
      //cout << aux << endl;
    }

    for(int i = 0; i<e; ++i){
      getline(cin, aux);
      excuses.push_back(aux);
      //cout << aux << endl;
    }

    for(int i = 0; i<e; ++i){
      words.clear();
      aux = excuses[i];
      transform(aux.begin(), aux.end(), aux.begin(), ::tolower);
      words = split(aux, ' ');
      //cout << aux << endl;
      //printf("+++++++++++++++++++++++\n");
      //for(int i = 0; i<words.size(); ++i)
        //cout << words[i] << endl;

      for(int w = 0; w<words.size(); ++w){
        for(int j = 0; j<k; ++j){
          if(words[w].find(keywords[j]) != string::npos){
            //cout << words[w] << endl;
            //cout << keywords[j] << endl;
            c[i]++;
            maxc = max(maxc, c[i]);
          }
        }
      }
    }

    printf("Excuse Set #%d\n", ++count);
    for(int i = 0; i<e; ++i)
      if(c[i] == maxc)
        cout << excuses[i] << endl;
    printf("\n");
  }

  return 0;
}
