#include <iostream>
using namespace std;

int soma(double bim1, double bim2) {
    return (bim1 + bim2) / 2;
}

int main() {

    string nome, curso, disciplina;
    double bimestre1, bimestre2, result;

    cout << "Nome: " << endl;
    getline(cin, nome);
    cout << "Curso: " << endl;
    getline(cin, curso);
    cout << "Disciplina: " << endl;
    getline(cin, disciplina);
    cout << "Nota do primeiro bimestre: " << endl;
    string input1;
    getline(cin, input1);
    bimestre1 = stod(input1);
    cout << "Nota do segundo bimestre: " << endl;
    string input2;
    getline(cin, input2);
    bimestre2 = stod(input2);
    
    cout << endl;
    result = soma(bimestre1, bimestre2);

    cout << "-----Infomações do Aluno-----" << endl;
    cout << "Nome: " << nome << endl;;
    cout << "Curso: " << curso << endl;
    cout << "Disciplina: " << disciplina << endl;

    if (result < 4) {
        cout << "A sua média é: " << result << " e você está REPROVADO" << endl;
    } else if (result > 4 && result < 6) {
        cout << "A sua média é: " << result << " e você está de EXAME FINAL" << endl;
    } else if (result > 6) {
        cout << "A sua média é: " << result << " e você está APROVADO" << endl;
    }




    // int numArray[5][4] = {
    // {
    //     1, 2, 3, 4
    // },
    // {
    //     5, 6, 7, 8
    // },
    // {
    //     9, 10, 11, 12
    // },
    // {
    //     13, 14, 15, 16
    // },
    // {
    //     17, 18, 19, 20
    // }
    // };
    // int numArray2[5][4] = {
    // {
    //     1, 2, 3, 4
    // },
    // {
    //     5, 6, 7, 8
    // },
    // {
    //     9, 10, 11, 12
    // },
    // {
    //     13, 14, 15, 16
    // },
    // {
    //     17, 18, 19, 20
    // }
    // };


    // cout << "This is the first nested array" << endl;
    // for (int i = 0; i < 5; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         cout << numArray[i][j];
    //     }
    //     cout << endl;
    // };
    // cout << endl;

    // cout << "This is the second nested array" << endl;
    // for (int a = 0; a < 5; a++) {
    //     for (int b = 0; b < 4; b++) {
    //         cout << numArray2[a][b];
    //     }
    //     cout << endl;
    // };
    // cout << endl;

    // string resposta;

    // cout << "Você quer ver a soma desses dois arrays?" << endl;
    // getline(cin, resposta);

    // if (resposta == "sim") {
    //     for (int c = 0; c < 5; c++) {
    //     for (int d = 0; d < 4; d++) {
    //         cout << numArray[c][d] + numArray2[c][d];
    //     }
    //     cout << endl;
    //     }
    // } else {
    //     cout << "tenha um bom dia" << endl;

    // }


    return 0;
}
