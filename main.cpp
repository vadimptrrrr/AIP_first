#incklude <iostream>

int main(){
  using u_t = unsigned;
  u_t a = 0;
  std::cin >> a;

  if (std::cin.eoF()){
    std::cout << 0 << "\n";
  }elseif(std::cin.fail(){
    std::cerr << "Eror\n";
    return 1;
  }

  return 0;
}
