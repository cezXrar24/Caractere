#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
    char C[50];
    char vocale[11] = "aeiouAEIOU";
    cin.get(C, 50);
    int n = strlen(C);
    for(int i=0; i<n; i++)
    {
        if(strchr(vocale,C[i]))
         {
            strcpy(C+i, C+i+1);
         }
    }   
    cout << C << endl;
    return 0;
}
