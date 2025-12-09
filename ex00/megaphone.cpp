#include <iostream>
#include <string>
void switch_to_upper(char **v) {
    for (int i = 0; v[i] != NULL; ++i) {
        for (int j = 0; v[i][j] != '\0'; ++j) {
            if (v[i][j] >= 'a' && v[i][j] <= 'z') {
                v[i][j] -= 32;  
            }
        }
    }
}

int main(int c, char **v) {
    if (c < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else {
        switch_to_upper(v);  
        for (int i = 1; i < c; ++i) {  
            std::cout << v[i] << " "; 
        }
        std::cout << std::endl;
    }
    return 0;
}

