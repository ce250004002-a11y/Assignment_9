#include <iostream>
using namespace std;

struct Color {
        int red,green,blue;
    };

int main() {
    Color arr[5] = {{1,2,3},{2,55,4},{3,45,6},{6,66,4},{63,54,45}};
    for (int i=0; i<3; i++){
        arr[i].red = 255-arr[i].red;
        arr[i].green = 255-arr[i].green;
        arr[i].blue = 255-arr[i].blue;
    }
    
    cout<<"{ ";
    for (int i=0; i<5; i++){
        cout<<"{ "<<arr[i].red<<", "<<arr[i].green<<", "<<arr[i].blue<<"} ";
    }
    cout<<"}"<<endl;
    return 0;
}
