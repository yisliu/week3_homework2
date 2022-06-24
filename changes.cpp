#include <iostream>
#include <string>
using namespace std;

int main() {
  //make vairable for input
  string str1;
  cin>>str1;
  //make for loop for changing the first and third character in the string into a minus sign
  for(int i = 0; i<str1.length(); i++){
    if(i==0){
      str1[i]='-';
    }
    else if(i==2){
      str1[i]='-';
    }
    else{
      continue;
    }
  }
  //output
  cout<<str1;
}