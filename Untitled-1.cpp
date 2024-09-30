#include<iostream>
using namespace std;
class school{
    private:
    int marks;
    int roll;
    char name[30]; 
    float percentage;
    public:
    void mark(int m){
        marks=m;

    }
    void display(){
        cout<<marks<<endl;
    }
};
int main(){
    school obj[20];
    int n;
    for(int i=1;i<5;i++){
        cout<<"enter the student"<<i<<"marks";
        cin>>n;
    obj[i].mark(n);
    obj[i].display();
    }
     //obj[2].mark(300);
    //obj[2].display();
    


}