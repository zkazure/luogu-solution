#include <bits/stdc++.h>
using namespace std;

int main() {
  string a = "", b="";
  string tmp;

  getline(cin, tmp);
  while (tmp!="EOF") {
    a += tmp;
    a += "\n";
    getline(cin, tmp);
  }

  getline(cin, tmp);
  while (tmp!="EOF") {
    while(tmp[0]=='<')
      // tmp = tmp.substr(1, tmp.size());
      tmp = tmp.substr(1);
      
    for (int i=0; i<tmp.size(); i++) {
      if (tmp[i]=='<') {
        // tmp = tmp.substr(0, i-1) + tmp.substr(i+1);
        tmp = tmp.substr(0, i-1) + tmp.substr(i+1);        
        i-=2;
      }
    }
    
    b += tmp;
    b += "\n";
    getline(cin, tmp);
  }

  int t=0;
  int count = 0;
  cin >> t;

  // cout << a;
  char* ap = &a[0];
  char* bp = &b[0];

  while (*ap != '\0' || *bp != '\0') {
    if (*ap == '\n') {
      ap++;
      while (*bp!='\n') {
        bp++;
      }
      bp++;
      continue;
    }
    
    if (*bp == '\n') {
      bp++;
      while (*ap!='\n') {
        ap++;
      }
      ap++;
      continue;
    }
    
    if (*ap == *bp) {
      count++;
    }

    ap++;
    bp++;
  }

  printf("%d", count*60/t);
  
  // string a;
  // getline(cin, a);
  // cout << a[a.size()];
  // cout << 1;
}
