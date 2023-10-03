#include <iostream>
#include <cctype>
#include <string>


///Exercicio 1
/*
namespace DataStore {
    bool dadosSaoValidos(std::string str) {
        if (str.length() >= 5 && str.length() <= 10) {
            return true;
        } else {
            return false;
        }
    }
}

namespace UserInterface {
    bool dadosSaoValidos(std::string str) {
        if (std::isupper(str[0])) {
            return true;
        } else {
            return false;
        }
    }
}

int main() {
    std::string data;
    std::string ui;

    std::cout << "Insira uma string para a validação do DataStore: ";
    std::getline(std::cin, data);
    bool isValidData = DataStore::dadosSaoValidos(data);

    std::cout << "Insira uma string para a validação do UserInterface: ";
    std::getline(std::cin, ui);
    bool isValidUI = UserInterface::dadosSaoValidos(ui);

    std::cout << "DataStore validation result for '" << data << "': ";
    if (isValidData) {
        std::cout << "Valid";
    } else {
        std::cout << "Invalid";
    }
    std::cout << std::endl;

    std::cout << "UserInterface validation result for '" << ui << "': ";
    if (isValidUI) {
        std::cout << "Valid";
    } else {
        std::cout << "Invalid";
    }
    std::cout << std::endl;

    return 0;
}*/

///Execricio 2
/*
void imprime(std::string a){
    std::cout<<a<<"\n";
}

void imprime (std::string a, int b){
    std::cout<<a<<b<<"\n";
}

void imprime(int b, std::string a){
    std::cout<<b << a<<"\n";
}

int main(){
    imprime("programacao orientada a objetos");
    imprime("horas por aula teorica ", 2);
    imprime(3, " horas em cada aula pratica");
    return 0;
}*/

///Exercicio 3
/*
int multiplica(){
    return 1;
}
int multiplica(int a){
    return a;
}

int multiplica(int a, int b){
    return a * b;
}

int multiplica(int a, int b, int c){
    int d;
    d = a * b * c;
    return d;
}



int main(){
   std:: cout << "\n" << multiplica() << "\n" << multiplica(5);
   std :: cout << std:: endl << multiplica(2,3) << std::endl << multiplica(2,3,4);
}
*/

///Exercicio 4
//Alinea a)
/*
void troca(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
*/
/*
void troca(int &a, int &b){
    int temp = a;
    a = b;
    b=temp;
}

int main() {
    int a = 5, b = 10;
    printf("Antes da troca:\na = %d\nb = %d\n", a, b);

    troca(a, b);

    printf("Depois da troca:\na = %d\nb = %d\n", a, b);

    return 0;
}
 */

///Exercicio 5


void seleciona (int &a, int &b, char c){

    if(c=='m'){
        if(a<b){
            a=0;
        }else{
            b=0;
        }
    } else if(c=='M'){
        if(a>b){
            a-=3;
        }else{
            b-=3;
        }
    }

}

int main(){
    int a = 5, b = 10;
    seleciona(a, b, 'm');
    std :: cout << "a = " << a << " b = " << b; // aparece 0 10
     }