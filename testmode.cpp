// testmode.cpp

#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>

#include"BinarySearch.h"

using namespace std;

int main(){
    int a[10] = { 1, 2, 2, 2, 5, 6, 8, 9 };
    int n = 8;
    int b[5] = {5, 4, 9, 10 ,2};
    int m = 8;
    for(int i = 0; i < m; i++){
        printf("i = %d,b[i] = %d, id(i) = %d\n", i, b[i], BinarySearch(b[i] , a, n));
    }
    return 0;
}
