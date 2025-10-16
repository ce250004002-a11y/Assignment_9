#include <iostream>
using namespace std;

struct item {
        int id;
        float cost;
    };

int main() {
    item arr[6] = {{1,2.3},{2,55.4},{3,45.6},{6,66.4}};
    for (item elements : arr){
        if(elements.cost>50){
            cout<<"The id of the elements is : "<<elements.id<<", And the cost is : "<<elements.cost<<endl;
        }
    }
    return 0;
}
