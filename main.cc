#include <iostream>

#define LIST_LEN 10

// using namespace std;

void f(int a){
  if(a > 0)
    std::cout << a << '\n';
}

int main(){
  // [МОДИФИКАТОР_ДОСТУПА] [МОДИФИКАТОР_ТИПА] [ТИП_ПЕРЕМЕННОЙ] ИМЯ_ПЕРЕМЕННОЙ [=НАЧАЛЬНОЕ_ЗНАЧЕНИЕ];
  int a = 300;
  char b;

  // преобразования типов
  // 
  // b = (char)a;
  b = a;
  // b = dynamic_cast<char>a;
  // b = const_cast<char>a;
  // b = reinterpret_cast<char>a;
  b++;
  cout << b << "\n";
  if(1){
    // всегда выполнится
  }else if(2){
    // всегда не выполнится
  }else{
    // всегда не выполнится
  }
  
  for (int i = 0; i < count; ++i)
  {
    b++;
  }
  return 0;
}
