// homework3_task2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

int main() {
  int valuer = 0;
  std::cout << "Enter the number, to Calculate the sum and arithmetic mean of this number \n";
  std::cin >> valuer;

  int valuer_number = 1;
  while ((valuer /= 10) > 0) valuer_number++;

  int first_value = 1;
  int second_value = 10;
  int counter = 0;
  float average = 0;

  int temp_value = valuer;
  int temp2_value = valuer;
  for (int i = 0; i < valuer_number; ++i) {
    counter += (temp_value % second_value) / first_value;
    second_value *= 10;
    first_value *= 10;
    temp_value = temp2_value;
    average += i;
  }
  std::cout << "sum =  " << counter << std::endl;
  std::cout << "average = " << counter / average;
  return 0;
}
