#include <iostream>
using namespace std;

struct Point{
        float x,y;
    };

int main() {
    Point arr[7];
    
    for (int i=0; i<7; i++){
        float x,y;
        cout<<"Enter the x coordinate : ";
        cin>>x;
        arr[i].x = x;
        
        cout<<"Enter the y coordinate : ";
        cin>>y;
        arr[i].y = y;
        cout<<"\n";
    }
    int count = 0;
    for (Point location : arr){
        if(location.x > 0 && location.y >0){
            count ++;
        }
    }
    
    cout<<"Number of points in the first quadrant is : "<<count;
    return 0;
}
