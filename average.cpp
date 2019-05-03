#include <iostream>
#include <fstream>

int main() {
  std::ifstream in;
  std::ofstream out;
  std::string line;
  in.open("test.txt");
  getline(in, line);
  out.open("out.txt");
  if (out.is_open()) {
      out << "huge huge";
      out << "hage hage";
      std::cout << "bar" << '\n';
  }
  out.close();
  return 0;
}
