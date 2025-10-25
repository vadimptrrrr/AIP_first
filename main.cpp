#include <iostream>
#include <cstddef>

int main(){
  using u_t = unsigned;
  u_t a = 0;
  size_t count = 0;

  std::cin >> a;
  
  while (std::cin >> a){
    count++;
  }

  if (std::cin.eof()){
    std::cout << count << "\n";
  }else if(std::cin.fail()){
    std::cerr << "Eror\n";
    return 1;
  }

  return 0;
}
