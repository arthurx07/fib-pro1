#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
using namespace std;

void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj);

int main()
{

    { // vigilar el tipus Estudiant

        struct Estudiant_cntrl {
            int dni;
            string nom;
            double nota;
            bool repetidor;
        };

        Estudiant ru;
        Estudiant_cntrl rc;

        // diagn�stics en temps de compilaci�
        ru.dni = rc.dni;
        ru.nom = rc.nom;
        ru.nota = rc.nota;
        rc.repetidor = ru.repetidor;

        // diagn�stics en temps d'execuci�
        if (sizeof(ru) != sizeof(rc))
            throw string("Sembla que 'Estudiant' no est� ben definit");
        if (typeid(ru.dni) != typeid(rc.dni))
            throw string("Sembla que 'Estudiant.dni' no est� ben definit");
        if (typeid(ru.nom) != typeid(rc.nom))
            throw string("Sembla que 'Estudiant.nom' no est� ben definit");
        if (typeid(ru.nota) != typeid(rc.nota))
            throw string("Sembla que 'Estudiant.nota' no est� ben definit");
        if (typeid(ru.repetidor) != typeid(rc.repetidor))
            throw string("Sembla que 'Estudiant.repetidor' no est� ben definit");
    }

    cout.setf(ios::fixed);
    cout.precision(4);

    int n;
    while (cin >> n) {
        vector<Estudiant> es(n);
        for (int i = 0; i < n; ++i) {
            cin >> es[i].nota >> es[i].repetidor;
        }
        double min, max, avg;
        informacio(es, min, max, avg);
        cout << min << " " << max << " " << avg << endl;
    }

    return 0;
}
