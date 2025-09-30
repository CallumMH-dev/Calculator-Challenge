#include <iostream>

int add  (int x, int y) { return x + y; }
int divi (int x, int y) { return x / y; }
int mul  (int x, int y) { return x * y; }
int sub  (int x, int y) { return x - y; }

int input() { int x {}; std::cin >> x; return x; }

int main()
{
  std::cout << "first num" << std::endl;
  int x { input() };
  std::cout << "second num" << std::endl;
  int y { input() };

  std::cout << "operator selection" << std::endl;
  int z { input() };

  switch(z)
  {
  	case 1: std::cout << x << " + " << y << " = " << add(x, y)  << std::endl; break;
  	case 2: std::cout << x << " / " << y << " = " << divi(x, y) << std::endl; break;
  	case 3: std::cout << x << " * " << y << " = " << mul(x, y)  << std::endl; break;
  	case 4: std::cout << x << " - " << y << " = " << sub(x, y)  << std::endl; break;
  	default: std::cout << "error in selection" << std::endl; break; return 0; 
  }
  
	return 0;
}
