#include<iostream>
using namespace std;

int main(){
  int x, count=0;
  
  while(true){
    cin >> x;
    if(x == 0)
      break;
    
    if(x == 5)
      	count++;
  }
  
  cout << count;
  return 0;
}
