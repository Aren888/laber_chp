#include <iostream>
#include <vector>


void kodavorum(char*, int, int, char*);

int main(){
    char ch[9] = {'A', 'B', 'C', 'A', 'B', 'C', 'A', 'B','C'};
    char matrix[3][3];
    std::cout << std::endl;
    kodavorum(&matrix[0][0], 3, 3, &ch[0]);
   
   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\n" ;
    kodavorum(&matrix[0][0], 3, 3, &ch[0]);
   
   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    std::cout << "\n" ;
    kodavorum(&matrix[0][0], 3, 3, &ch[0]);
   
   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
  
    return 0;
}

void kodavorum(char* list, int m, int n, char* miachap) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *((list + 3*j)+i) = *((miachap + j) + 3*i);
        }
    }
   for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *((miachap + j) + 3*i) = *((list + 3*i)+j);
        }
    }
}
