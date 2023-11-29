#include <iostream>
using namespace std;
// Função para multiplicar duas matrizes
void multiplyMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10],int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
// Inicializa a matriz de resultado com zeros
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            result[i][j] = 0;
        }
    }
// Multiplica as duas matrizes
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            for (int k = 0; k < columnFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}
int main() {
    int rowFirst, columnFirst, rowSecond, columnSecond;
    cout << "Informe as dimensoes da primeira matriz (linhas e colunas): ";
    cin >> rowFirst >> columnFirst;
    cout << "Informe as dimensoes da segunda matriz (linhas e colunas): ";
    cin >> rowSecond >> columnSecond;
// Verifica se é possível multiplicar as matrizes
    if (columnFirst != rowSecond) {
        cout << "Erro: O número de colunas da primeira matriz deve ser igual ao número de linhas da segunda matriz." << endl;
        return 1;
    }
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];
    cout << "Informe os elementos da primeira matriz:" << endl;
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnFirst; ++j) {
            cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> firstMatrix[i][j];
        }
    }
    cout << "Informe os elementos da segunda matriz:" << endl;
    for (int i = 0; i < rowSecond; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> secondMatrix[i][j];
        }
    }
    multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, columnFirst, rowSecond, columnSecond);
// Exibe a matriz resultante
    cout << "Matriz resultante da multiplicacao:" << endl;
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            cout << result[i][j] << " ";
            if (j == columnSecond - 1)
                cout << endl;
        }
    }
    return 0;
}