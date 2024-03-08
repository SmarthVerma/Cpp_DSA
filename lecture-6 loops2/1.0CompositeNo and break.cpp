#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
      for(int i=2;i<=n-1;i++){
        if(n%i==0){
        cout<<n<<" is composite number."<<endl;
        break;
        }
      }
         // loop ko break krida wrna bhot baar aata likha wa
    return 0;
}