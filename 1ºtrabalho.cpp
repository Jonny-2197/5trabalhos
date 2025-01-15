#include <iostream>
using namespace std;

int main() {
    cout << "Qual e a picareta que deves usar para partir um bloco de obsidian?" << endl;
    cout << "1. madeira" << endl;
    cout << "2. pedra" << endl;
    cout << "3. ferro" << endl;
    cout << "4. diamante" << endl;

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
