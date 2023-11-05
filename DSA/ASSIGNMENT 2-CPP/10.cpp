#include <bits/stdc++.h>
using namespace std;
int pow(int x,int y){
    if(y==0){
        return 1;
    }
    return x*pow(x,y-1);
}