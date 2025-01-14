#include <iostream>
using namespace std;

int main() {
    cout << "Qual e a picareta que deves usar para partir um bloco de obsidian?" << endl;
    cout << "madeira" << endl;
    cout << "pedra" << endl;
    cout << "ferro" << endl;
    cout << "diamante" << endl;

    string picaretas[4] = {"madeira", "pedra", "ferro", "diamante"};

    string escolha;
    cin >> escolha;

    if (escolha == "diamante") {
        cout << "parabens acertaste a picareta" << endl;
    } else if (escolha == "madeira"  escolha == "pedra"  escolha == "ferro") {
        cout << "temos pena mas não consegues partir um bloco de obsidian com uma picareta dessas" << endl;
    }

    return 0;
}
