#include <iostream>
#include <cstddef>
#include <limits>

bool canPow(size_t a){
  size_t max = std::numeric_limits<size_t>::max();
  return (a > max / a);
}

bool canSum(size_t a, size_t b){
  size_t max = std::numeric_limits<size_t>::max();
  return (a > max - b);
}

bool isPyth(unsigned a, unsigned b, unsigned c){
  bool p = a*a == (b*b + c*c);
  p = p || b*b == (a*a + c*c);
  p = p || c*c == (a*a + b*b);
  return p;
}

int main(){
  size_t a = 0, b = 0, c= 0;
  std::cin >> c >> b;
  size_t count = 0;
  
  while (std::cin >> a){
    bool v = canPow(a);
    v = v || canPow(b);
    v = v || canPow(c);

    bool w = canSum(a*a, b*b);
    w = w || canSum(a*a, c*c);
    w = w || canSum(c*c, b*b);

    if (v || w){
      std::cout << "out of limts\n";
      return 2;
    }

    count += isPyth(a, b, c)?1:0;
    c=b;
    b = 0;
  }

  if (std::cin.eof()){
    std::cout << count << "\n";
  }else if(std::cin.fail()){
    std::cerr << "Eror\n";
    return 1;
  }

  return 0;
}
