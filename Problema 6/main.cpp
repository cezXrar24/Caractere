#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char C1[25];
    char C2[25];
    cout << "Introdu primul cuvant: ", cin >> C1;
    cout << "Introdu al doilea cuvant: ", cin >> C2;
    int pos1 = strlen(C1);
    int pos2 = strlen(C2);
    if(C1[pos1-1] == C2[pos2-1] && C1[pos1-2] == C2[pos2-2])
     cout << "Cuvintele rimeaza" << endl;
    else
    {
        if(toupper(C1[pos1-1] == C2[pos2-1]) || C1[pos1-1] == toupper(C2[pos1-1]))
        {
            if(toupper(C1[pos1-2]) == C2[pos2-2] || C1[pos1-2] == toupper(C2[pos1-2]))
            {
                cout << "Cuvintele rimeaza" << endl;
            }
        }
    }
    return 0;
}