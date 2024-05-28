#include<iostream>
#include<string>
using namespace std;

class car{
    string brand;
    string model;
    int year;
    public:
    car(string b,string m,int y){
        brand=b;
        model=m;
        year=y;
    }
    void showdata(){
        cout<<"brand="<<brand<<endl;
        cout<<"model="<<model<<endl;
        cout<<"year="<<year<<endl;

    }
};

int main(){
    car c1("Toyota","Camry",2015);
    c1.showdata();
    car c2("bmw","s-60",1978);
    c2.showdata();
    return 0;
}