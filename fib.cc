#include<iostream>


int fibN(int n){
  if(n==1 || n==0){
    return 1;
  }
  else if(n<0){
    return fibN(n+1) + fibN(n+2);
  }

  else{
    return fibN(n-1) + fibN(n-2);
  }
}

int main(){
  int n;
  std::cout << "Enter an integer: ";
  std::cin >> n;
  std::cout << fibN(n) << "\n";
  return 0;
}
