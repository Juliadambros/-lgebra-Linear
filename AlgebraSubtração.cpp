#include <iostream>
using namespace std;
#define N 10
int main(){
    int linha1 = 0, coluna1 = 0, linha2 = 0, coluna2 = 0;
    cout << "Adicione a quantidade de linhas e colunas da primeira matriz: ";
    cin >> linha1 >> coluna1;
    cout << "Adicione a quantidade de linhas e colunas da segunda matriz: ";
    cin >> linha2 >> coluna2;
    if (coluna1 != linha2){
        cout << "A matriz nao pode ser multiplicada.";
        return 0;
    }
    int matriz1[N][N] = {0}, matriz2[N][N] = {0}, produto[N][N] = {0};
    cout << "Adicione os elementos da primeira matriz: " << endl;
    for (int i = 0; i < linha1; ++i){
        for (int j = 0; j < coluna1; ++j){
            cin >> matriz1[i][j];
        }
    }
    cout << "Adicione os elementos da segunda matriz: " << endl;
    for (int i = 0; i < linha2; ++i){
        for (int j = 0; j < coluna2; ++j){
            cin >> matriz2[i][j];
        }
    }
    for (int i = 0; i < linha1; ++i){
        for (int j = 0; j < coluna2; ++j){
            produto[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
    cout << "O resultado da operacao eh: " << endl;
    for (int i = 0; i < linha1; ++i){
        for (int j = 0; j < coluna2; ++j){
            cout << produto[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}