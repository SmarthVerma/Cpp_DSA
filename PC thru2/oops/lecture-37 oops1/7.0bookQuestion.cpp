#include <iostream>
#include <string>

using namespace std;

    class book{
        public:
    
        string name;
        float price;
        int noOfPages;

        bool countBooks(float p){
            if(price<p){
                return true;
            }
            else return false;
        }

        bool isPresent(string book){
            if(name==book){
            return true;
            }
            else return false;
        }
    };


int main(){

    book amitisha;

    
    amitisha.name="JadenOfMirange";
    amitisha.price=546.45;
    amitisha.noOfPages=466;

    
    cout<<amitisha.countBooks(553.2);
    
    cout<<amitisha.isPresent("JadenOfMirange");

    cout<<sizeof(book);
    
}