#include <iostream> 

#include <cstdlib> 

#include <algorithm> 

using namespace std; 


    int main(void) { 

    const int lenght = 12;//встановлений розмір масиву 

    int m[lenght]; 

 
      for (int  i = 0; i < lenght; i++) 

    { 

    m[i] = int(rand() % 90);// беремо рандомні числа  

    } 

    cout << "Array before transformation :\n"; 

      for (int i = 0; i < 12; i++)
    { 

    cout << m[i] << " "; 

    } 
      
      sort(m, m + lenght);//сортуємо

    cout << "\n Array after  :\n"; 

      for (int i = 0; i < 12; i++) {
        
    cout << m[i] << " ";//виведення готового массиву
        
    } 
      
    return 0; 

    } 

 

 