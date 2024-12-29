#include <iostream>

int main() {
  int a,b,c;
  std:: cin >> a >> b >> c;
  int total_score = a+b+c;
  if (total_score >= 80) std::cout << "A";
  else if (total_score >= 75 ) std::cout << "B+";
  else if (total_score >= 70 ) std::cout << "B";
  else if (total_score >= 65 ) std::cout << "C+";
  else if (total_score >= 60 ) std::cout << "C";
  else if (total_score >= 55 ) std::cout << "D+";
  else if (total_score >= 50 ) std::cout << "D";
  else if (total_score < 50) std::cout << "F";

} 
