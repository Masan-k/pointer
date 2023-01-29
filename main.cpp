#include<iostream>
int main()
{

  char* p = nullptr;

  char c = 'A';
  p = &c; //cの記憶場所がpに入る

  std::cout << "c : " << c << std::endl; 
  std::cout << "p : " << *p << std::endl; 

  c = 'B';
  std::cout << "c : " << c << std::endl; 
  std::cout << "p : " << *p << std::endl; 

  //記憶場所の配列
  char s[8] = "AAAAA";
  std::cout << "p : " << s << std::endl; 
  p = s; 
  p[2] = '!';
  std::cout << "p : " << s << std::endl; 

  *(p+2) = '?';
  std::cout << "p : " << s << std::endl; 
  
  while(*p != '\0'){
    *p = '!';
    *p++;
  }
  std::cout << "p : " << s << std::endl; 
}
