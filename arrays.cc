#include <iostream>

#define ARRAY_LENGTH 5

int main(){
  // Статический массив не инициализированный
  int Array[ARRAY_LENGTH];
  std::cout << "Array1: ";
  for (int i = 0; i < ARRAY_LENGTH; ++i)
  {
    Array[i] = i;
    std::cout << Array[i] << " ";
  }
  std::cout << "\n";

  // Статический массив с инициализацией и автоопределение размера
  int Array2[] = {5,4,3,2,1};
  std::cout << sizeof Array2 / (sizeof (int));
  std::cout << "Array2: ";
  for (int i = 0; i < 5; ++i)
  {
    std::cout << Array2[i] << " ";
  }
  std::cout << "\n";
  std::cout << "Please, enter array length: ";
  int iArrayLength;
  std::cin >> iArrayLength;
  int* piCustomArray;
  piCustomArray = new int[iArrayLength];
  std::cout << "Please, fill array with elements: \n";

  for (int i = 0; i < iArrayLength; ++i)
  {
    std::cin >> piCustomArray[i];
    // std::cin >> *(piCustomArray + i);
  }

  std::cout << "User's array: ";
  for (int i = 0; i < iArrayLength; ++i)
  {
    std::cout << piCustomArray[i] << " ";
    // std::cin >> *(piCustomArray + i);
  }
  std::cout << "\n";

}









