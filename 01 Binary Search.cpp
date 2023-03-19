#include<iostream>
using namespace std;
int main()
{
    int i, arr[10], num, left, right, middle;
    cout<<"Masukkan 10 angka (dari yang terkecil secara urut):\n";
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<"\nMasukkan angka yang ingin dicari di Indeks: ";
    cin>>num;
    left = 0;
    right = 9;
    middle = (left+right)/2;
    while(left <= right){
        if(arr[middle]<num)
            left = middle+1;
        else if(arr[middle]==num){
            cout<<"\nAngka, "<<num<<" berada di indeks ke- "<<middle;
            break;
        }
        else
            right = middle-1;
        middle = (left+right)/2;
    }
    if(left>right)
        cout<<"\nAngka, "<<num<<" tidak tidak ditemukan didalam array";
    cout<<endl;
    return 0;
}
