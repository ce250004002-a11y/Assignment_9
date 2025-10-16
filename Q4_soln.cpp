#include <iostream>
using namespace std;
#include <string>

struct SalesRecord{
        string month;
        float amount;
    };

int main() {
    SalesRecord arr[12];
    
    for (int i=0; i<12; i++){
        float amount;
        string month;
        cout<<"Enter the month : ";
        cin>>month;
        arr[i].month = month;
        
        cout<<"Enter the amount for this month : ";
        cin>>amount;
        arr[i].amount = amount;
        cout<<"\n";
    }
    
    float max = arr[0].amount;
    string max_month = "";
    
    float min = arr[0].amount;
    string min_month = "";
    for (SalesRecord record : arr){
        if(record.amount>max){
            max = record.amount;
            max_month = record.month;
        }
        if(record.amount<min){
            min = record.amount;
            min_month = record.month;
        }
    }
    
    cout<<"Maximum Amount was in "<<max_month<<" And the amount is : "<<max<<endl;
    cout<<"Minimum Amount was in "<<min_month<<" And the amount is : "<<min<<endl;
    return 0;
}
