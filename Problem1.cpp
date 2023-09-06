#include <iostream>
#include <cmath>

int main() {

   float j = 0.0f;
   float res1;
   float num1 = (1.0f - (1.0f + (1.0f / std::powf(2.0f, j))));

   while (num1 != 0) {
      num1 = (1.0f - (1.0f + (1.0f / std::powf(2.0f, j))));
      res1 = j;
      j++;
   }

   double k = 0.0;
   double res2;
   double num2 = (1.0 - (1.0 + (1.0 / std::pow(2.0, k))));

   while (num2 != 0) {
      num2 = (1.0 - (1.0 + (1.0 / std::pow(2.0, k))));
      res2 = k;
      k++;
   }

   std::cout << "The Precision of 32 Bit Floats is: " << (1 / (float)std::pow(2.0, res1)) << std::endl;
   std::cout << "The Precision of 64 Bit Floats is: " << (1 / (double)std::pow(2.0, res2)) << std::endl;

   return 0;
}