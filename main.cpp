#include <iostream>

using namespace std;

int emerytura(double skladka, double waloryzacja)
{
        int kapital = 0;

        for(int okres = 1; okres <= 40; okres++)
            {
                kapital = (kapital + skladka * 12) * waloryzacja;

                cout << "\n Rok skladkowy: " << okres << " - " << "Kapital: " << kapital << " zl";
            }

        cout << endl << endl;

        int emerytura = kapital / 204;

        return emerytura;
}

int main()
{
    double waloryzacja, skladka;
    int pensja, twoja_emerytura;

    cout << "Podaj wysokosc pensji brutto: ";
    cin >> pensja;

    cout << "Podaj srednia wartosc corocznej stopy waloryzacji kapitalu np. 1.06 : ";
    cin >> waloryzacja;

    skladka = pensja * 0.195;

    twoja_emerytura = emerytura(skladka, waloryzacja);

    cout << "\nTwoja emerytura po 40 latach pracy: " << twoja_emerytura << " zl brutto" << endl;

    cout << "\nWartosc emerytury zdyskontowana inflacja: " << twoja_emerytura/4 << " zl brutto" << endl;

    return 0;
}
