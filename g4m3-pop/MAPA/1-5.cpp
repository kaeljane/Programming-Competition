#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Impedir a invasão
    // As hordas precisam ser bloqueadas.
    // O tamanho do exercíto de defesa é sempre o mesmo. (popu cidade)
    // Para cada horda, você precisa manter o controle das quantidades de melões roubados e de goblins resgatados.
    int p, f, m, g;
    int qMeloesRoubados = 0;
    int goblinsResgatados = 0;
    cin >> p;
    // p -> população

    // f -> popu necessária para impedir a horda
    // m -> melões que podem ser roubado pela horda
    // g -> quant de goblins resgatados se nao impedir
    while (cin >> f >> m >> g){
        if (f == 0 && m == 0 && g == 0) {
            break;
        }
        else if (p >= f)
        {
            m = 0;
            g = 0;
            cout << "Meloes roubados: " << qMeloesRoubados << '\n'<< "Goblins resgatados: " << goblinsResgatados << '\n' << "---" << endl;
            qMeloesRoubados += 0;
            goblinsResgatados += 0;
        }
        else{ // (p < f)
            qMeloesRoubados += m;
            goblinsResgatados += g;
            cout << "Meloes roubados: " << qMeloesRoubados << '\n'<< "Goblins resgatados: " << goblinsResgatados << '\n' << "---" << endl;
        }
    }
    return 0;
}