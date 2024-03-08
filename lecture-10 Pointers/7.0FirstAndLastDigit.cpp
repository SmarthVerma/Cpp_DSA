#include <iostream>
using namespace std;
   void find(int n, int* first, int* last){
        *last = a%10;
        while(a>9){
            a/=10;
        }
        *first=a;

   }

   int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    int firstdigit;
    int lastdigit;
    int* ptr1=&firstdigit;
    int* ptr2=&lastdigit;

    find(n,ptr1, ptr2);
    
    cout<<firstdigit<<" "<< lastdigit;
    return 0;
    }