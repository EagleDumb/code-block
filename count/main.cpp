#include <iostream>

using namespace std;

bool check_value (int x, int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[10] = {1,1,2,2,2,3,4,5,5,5};
    int temp_arr[10] = {0};

    int index = 0;
    for (int i = 0; i < 10; i++) {
        if (check_value(arr[i], i, temp_arr) == false) {
            temp_arr[index] = arr[i];
            index = index + 1;
        }
    }

    for (int j = 0; j < index; j ++) {
        cout << temp_arr[j] << " ";
    }

    for (int count = 0; count < 10; count ++) {
        int count1 = 0;
        for (int k = 0; k < )
    }



    /*

    for (int i = 0; i < 10; i++) {
        int count1 = 0;
        int temp = arr[i];
        for (int j = 0; j < 10; j++) {
            if (temp == arr[j]) {
                count1 = count1 + 1;
            }
        }
        cout << arr[i] << ": " << count1 << endl;
    }

    */
}
