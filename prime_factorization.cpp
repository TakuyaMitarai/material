#include <iostream>
using namespace std;

int N = 240;
int M = 30130;



int main()
{
    int i = 2;
    int jn = 0;
    int jm = 0;
    int count = 0;
    int n_div_kinds[100];
    int n_div_count[100];
    int m_div_kinds[100];
    int m_div_count[100];

    //Nの素因数分解
    while(N >= i){
        if(N % i == 0) {
            count++;
            N /= i;
            if(N % i != 0) {
                n_div_kinds[jn] = i;
                n_div_count[jn] = count;
                jn++;
                count = 0;
            }
        }else {
            i++;
        }
    }

    //Mの素因数分解
    i = 2;
    while(M >= i){
        if(M % i == 0) {
            count++;
            M /= i;
            if(M % i != 0) {
                m_div_kinds[jm] = i;
                m_div_count[jm] = count;
                jm++;
                count = 0;
            }
        }else {
            i++;
        }
    }

    //NとMの素因数の出力
    for(int i = 0; i < jn; i++) {
        cout << n_div_kinds[i] << " " << n_div_count[i] << "  |  ";
    }
    cout << endl;
    for(int i = 0; i < jm; i++) {
        cout << m_div_kinds[i] << " " << m_div_count[i] << "  |  ";
    }
    return 0;
}