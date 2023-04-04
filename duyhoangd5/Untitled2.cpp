#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAXN = 1000;

int a[MAXN][MAXN];

/*
* Ki?m tra theo ðý?ng chéo.
* 1 1 0
* 1 1 0
* 1 0 0
* Ki?m tra s? ? trên và trái xem có ph?i s? 1 t?o thành h?nh vuông không.
*/
bool check_Above_Left(int a[10000][1000], int i, int j, int x){
    int dem = 0;
    for (int y  = 1; y < x+1; y++){
        if(a[i-y][j]==1 && a[i][j-y]==1)
        {
            dem++;
        }
    }
    if(dem == x)
    {
        return true;
    }
    return false;
}

int main() {
    srand(time(NULL));
    int n = 5;
    cout << "Nhap cap ma tran: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }
    cout << "Ma tran ban dau:\n";
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int ans = 0, x = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) 
        {
            if (a[i][j] == 1) {
                int y = 0;
                x  = 0;
                y = (j >= i) ? j : i;
                for(y; y <= n; ++y) 
                {
                    if(check_Above_Left(a, i+x, j+x, x) == true)
                        {
                            x++;
                        }
                }
            }
            if(x > ans )
            {
                ans = x;
            }
        }
    }
    cout << "Dien tich dat tho cu lon nhat la(1): " << ans*ans << endl;
    system("pause");
    return 0;
}
