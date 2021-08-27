#include <iostream>

using namespace std;

const int MAXN = 100005000;
const int MAXVALUE = 1000000500;
const int NOINDEX = -1;
int n;
int a[MAXN];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int maxa = -MAXVALUE - 1;
    int indmaxa = NOINDEX;
    for (int i = 0; i < n; ++i) {
        if (maxa < a[i]) {
            maxa = a[i];
            indmaxa = i;
        }
    }

    int max2a = -MAXVALUE - 1;
    for (int i = 0; i < n; ++i) {
        if (i != indmaxa) {
            if (max2a < a[i]) {
                max2a = a[i];
            }
        }
    }

    cout << max2a << '\n';
    return 0;
}
