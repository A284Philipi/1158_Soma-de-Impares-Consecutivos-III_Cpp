#include <iostream>

using namespace std;

int main()
{
    int n1, n2, casos, cont = 0;
    cin >> casos;
    while (cont < casos){
        int i = 0, resultado = 0;
        cin >> n1;
        cin >> n2;
        if (n1%2 == 0){
            n1++;
        }
        for (i; i < n2; i++){
            resultado = resultado + n1;
            n1 = n1 + 2;
        }
        cout << resultado <<endl;
        cont++;
    }
    return 0;
}
