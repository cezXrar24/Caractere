#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char C[25];
    char vocale[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char space = ' ';
    cin >> C;
    int n = strlen(C);
    int vCounter = 0;
    int cCounter = 0;
    int sCounter = 0;
    for(int i=0; i<n; i++)
    {
        if(C[i] == space)
         sCounter++;
        else
        {
            int isV = 0;
            for(int j=0; j<10; j++)
            {
                if(C[i] == vocale[j])
                {
                    vCounter++;
                    isV = 1;
                    j = 10;
                }
            }
            if(isV == 0)
            {
                cCounter++;
            }
        }
    }
    cout << "Consoane: " << cCounter << endl;
    cout << "Vocale: " << vCounter << endl;
    cout << "Spatii: " << sCounter << endl;
    return 0;
}