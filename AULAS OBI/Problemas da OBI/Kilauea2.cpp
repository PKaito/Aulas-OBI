#include <bits/stdc++.h>

using namespace std;

int N, F;

const int MAX = 500;

int mapa[MAX][MAX]

espalha(int i, int j);

int void(main){

cin >> N >> F;


for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
         cin >> mapa[i][j];
    }
}

if ((int)mapa[0][0] <= F){
    mapa[0][0] = '*';
    espalha(0, 0);

}

for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
         cout << mapa[i][j];
    }
}

}
void espalha(int i, int j){
bool n = false, s = false, l = false, o = false;

if(i != 0){
    if(mapa[i-1][j] != '*' && (int)mapa[i-1][j] < F){
        mapa[i-1][j] = '*';
        n = true;
    }
}

if(j != 0){
    if(mapa[i][j-1] != '*' && (int)mapa[i][j-1] < F){
        mapa[i][j-1] = '*';
        o = true;
    }

}

if(i != (N-1)){
    if(mapa[i+1][j] != '*' && (int)mapa[i+1][j] < F){
        mapa[i+1][j] = '*';
        s = true;
    }
}

if(j != (N-1)){
    if(mapa[i][j+1] != '*' && (int)mapa[i][j+1] < F){
        mapa[i][j+1] = '*';
        l = true;
    }

}

if(n == true){
    espalha(i-1, j);
}

if(o == true){
    espalha(i, j-1);
}

if(s == true){
    espalha(i+1, j);
}

if(l == true){
    espalha(i, j+1);
}

}