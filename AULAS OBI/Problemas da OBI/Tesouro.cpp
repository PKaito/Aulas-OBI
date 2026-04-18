using namespace std;
#include <iostream>
int main(void){
    int A;//tesouro
    int N;//número de marinheiros
    cin >> A;
    cin >> N;
    int x = 2*A/(N+2);
    cout << x << "\n";
    return 0;
}
