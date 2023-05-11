#include<bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(string s){
  stack<char>st;
  for(char x: s){
    if(x == '(' || x == '{' || x == '['){
      st.push(x);
    }
    else{
      if(st.empty()) return false; //duyet chua het ma da rong
      st.pop();
    }
  }
  return st.empty();
}

int main(){
  #ifndef ONLINE_JUD
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  string s; cin >> s;
  if(check(s)) cout << "YES";
  else cout << "NO";
}