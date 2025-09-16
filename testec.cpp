#include <iostream>
#include <string> 
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    cout << "O Byte está com fome?\n";
    string fome;
    cin >> fome;
    
    if (fome == "sim"){
        cout << "O que você vai dar para ele comer?\n";
        string comida;
        cin >> comida;
        if (comida == "carne" || comida == "ração" || comida == "petisco"){
            cout << "Byte comeu " << comida << " e está feliz!\n";
            cout << "Depois desse banquete, Byte pode tirar um cochilo feliz\n";

        }
        else{
            cout << "Byte não gosta de " << comida << "\n";
            cout << "Byte se irritou e foi dormir pra ver se sonha com suas refeições prediletas...\n";

        }

    }
    else if (fome == "não"){

        cout << "Já que Byte não está com fome, ele pode passear\n";
        cout << "Está chovendo ?\n";
        string chuva;
        cin >> chuva;
        
        if (chuva == "sim"){
            cout << "Já que está chovendo, Byte vai ter que brincar em casa\n";

        }
        else if (chuva == "não"){
            cout << "Byte está indo passear\n";

        }
        else{
            cout << "Insira uma resposta válida\n";

        }
    }

    else{
        cout << "Insira uma resposta válida\n";
    }

    
}
