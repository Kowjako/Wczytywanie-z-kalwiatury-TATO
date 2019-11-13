#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main() {
    char k;
    int A[3] = {0,0,0};
    k=getchar();
    while(true) {
        if(k=='t') A[0]++;
        if(k=='a') A[1]++;
        if(k=='o') A[2]++;
        if(A[0]>=2 && A[1]>=1 && A[2]>=1) {
            cout<<"Koniec"<<endl;
            break;
        }
        k=getchar();
    }
    return 0;
}

