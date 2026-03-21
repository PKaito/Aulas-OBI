#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int N;
    
    cin >> N;

    int X[N];

    for(int i = 0; i < N; i++){
        cin >> X[i];
    }

    int H = 0;
    for(int i = 0; i < N; i++){
        if(X[i] > H){
            H = X[i];
        }
    }

    int matrix[H][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < H; j++){
            if(j < (H - X[i])){
                matrix[j][i] = 0; 
            }else{
                matrix[j][i] = 1;
            }
        }
    }

    for(int j = 0; j < H; j++){
        for(int i = 0; i < N; i++){
            cout << matrix[j][i] << " ";
        }
        cout << "\n";
    }

    return 0;
}