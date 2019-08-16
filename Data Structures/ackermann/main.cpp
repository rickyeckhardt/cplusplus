#include <iostream>

int Ackermann(int x, int y);

using namespace std;

int main() {

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            Ackermann(i,j);
        }
    }

    return 0;
}

int Ackermann(int x, int y){
    if ( x == 0){
        cout << "\tA(" << x << "," << y << ")\t";
        return y + 1;
    } else if ( x > 0 && y == 0){
        cout << "\tA(" << x << "," << y << ")\t";
        return Ackermann(x-1, 1);
    } else if ( x > 0 && y > 0 ) {
        cout << "\tA(" << x << "," << y << ")\t";
        return Ackermann(x-1, Ackermann(x, y-1));
    }
}
