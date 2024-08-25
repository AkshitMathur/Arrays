//23070123014 Akshit Mathur
#include <iostream>
using namespace std;
int main() {
    int i,key;
    int x[5];
    cout<<"enter the elements"<<endl;
    for (i=0;i<5;i++){
        cin>>x[i];
    }
    cout<<"enter the key"<<endl;
    cin>>key;
	{
    for (i = 0; i < 5; i++) 
        if (key == x[i]) 
        {
           cout << "Key found at location:"<<i<<endl;
           break;
        }
        if(key!=x[i])
        {
           cout << "Key doesnot exist in array"<<endl;
        }
	}
    
    return 0;
}
//output
/*enter the elements
1
2
3
4
5
enter the key
45
Key doesnot exist in array/*
/*enter the elements
1
2
3
4
5
enter the key
4
Key found at location:3/*

