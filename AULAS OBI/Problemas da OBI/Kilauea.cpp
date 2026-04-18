#include <bits/stdc++.h>

using namespace std;

void espalha(char* lava, int i, int j, int N, int F);

int void(main){
int N, F;
cin >> N >> F;

char mapa[N][N];

for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
         cin >> mapa[i][j];
    }
}

if ((int)mapa[0][0] <= F){
    mapa[0][0] = '*';
    espalha(&mapa[0][0], N, F);

}

}
void espalha(char* lava, int i, int j, int N, int F){
bool n = false, s = false, l = false, o = false;

if(i != 0){
    if(*lava[-N] != '*' && (int)*lava[-N] < F){
        *lava[-N] = '*';
        n = true;
    }
}

if(j != 0){
    if(*lava[-1] != '*' && (int)*lava[-1] < F){
        *lava[-1] = '*';
        o = true;
    }

}

if(i != (N-1)){
    if(*lava[N] != '*' && (int)*lava[N] < F){
        *lava[N] = '*';
        s = true;
    }
}

if(j != (N-1)){
    if(*lava[1] != '*' && (int)*lava[1] < F){
        *lava[1] = '*';
        l = true;
    }

}

if(n == true){
    espalha(&lava[-N], i-1, j, N, F);
}

if(o == true){
    espalha(&lava[-1], i-1, j, N, F);
}

if(s == true){
    espalha(&lava[N], i-1, j, N, F);
}

if(l == true){
    espalha(&lava[+1], i-1, j, N, F);
}

}