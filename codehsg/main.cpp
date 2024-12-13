#include <iostream>

using namespace std;
void reverse1 (int a) {

    while (a > 10) {
        cout << a % 10;
        a = a/10;
    }

}

int main()
{
    int n;
    cin >> n;

    reverse1(n);
}
