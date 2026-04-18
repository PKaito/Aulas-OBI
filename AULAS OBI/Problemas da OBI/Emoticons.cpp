using namespace std;
#include <iostream>
# include <string>

int main(void){
    string linha;

    int D = 0, C = 0;

    getline(cin, linha);

    int tam;

    tam = linha.size

    cout << linha << "\n";

    for (int i = 0; i < (tam - 2); i++){
        if (linha[i] == ':' && linha[i+1] == '-' && linha[i+2] == ')'){
            D++;
        }
        if (linha[i] == ':' && linha[i+1] == '-' && linha[i+2] == '('){
            C++;
        }
    }

    if (D > C){
        cout << "divertido\n";
    }else if(D < C){
            cout << "chateado\n";
        }else {
                cout << "neutro\n";
            }
        }
    }

    return 0;
}