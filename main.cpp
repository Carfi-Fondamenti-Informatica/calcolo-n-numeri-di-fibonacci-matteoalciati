#include <iostream>
using namespace std;


int main() {
    int n=0;
    int a=0;
    int b=1;
    int c=0;

    cin >> n ;

    if(n>=2){
        for (int i=0; i<n; i++){

            c=a+b;

            cout << c << endl;

            b=a;

            a=c;

        }

    } else {
        cout << "errore";

    }


    return 0;
}

