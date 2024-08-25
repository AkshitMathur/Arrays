
#include <iostream>
using namespace std;
int main() {
    int i,j;
    int x[5];
    cout<<"enter the elements"<<endl;
    for (i=0;i<5;i++){
        cin>>x[i];
    }
    int max = x[0];
    int min = x[0];

    for (int i = 1; i < 5; i++) 
    {
        if (max < x[i])
        {
            max = x[i];
        }
    }

    for (int j = 1; j < 5; j++) 
    {
        if (min > x[j]) 
        {
            min = x[j];
        }
    }

    cout << "Maximum is " << max << endl;
    cout << "Minimum is " << min << endl;

    return 0;
}
//output
/*enter the elements
1
2
3
4
5
Maximum is 5
Minimum is 1/*
