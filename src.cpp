#include <iostream>

void devMode();

int main(int argc, char* argv[]) {
  const char* devmode_true = "devmode=true";
  if(argv[1] == devmode_true) devMode();
  return 0;
}

void devMode() {
  std::cout << "devmode has called" << std::endl;
}
