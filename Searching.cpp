#include<iostream>
#define N 100
using namespace std;
void Searching (int n,int arr[],int k);
int main (){
    int array[N],o,j;
    cout<<"    Enter The Array Size   :: ";
    cin>>o;
    system("cls");
    for (int i=1; i<=o;i++)
        {
            cout<<"Enter The "<<o <<" of "<<i<<" index Array:: ";
            cin>>array[i];
            system("cls");
        }
    system("cls");
    cout<<"Enter The Searching Element:: ";
    cin>>j;
    system("cls");
    Searching(o,array,j);
    return EXIT_SUCCESS;
}
void Searching (int n,int arr[],int k){
    for (int i=1; i<=n;i++)
        {
            if (i==n && arr[i]!=k)
                cout<<"Not Found";
            else if (arr[i]!=k)
                continue;
            else
                cout<<"Found at "<<i<<" Index";
        }
}
