#include<iostream>
using namespace std;
class school{
    private:
    int mark;
    int roll;
    char name[30]; 
    float percentage;
    public:
    void input(){
        cout<<"enter the marks of student ";
        cin>>mark;
    }
    void display(){
        cout<<mark<<endl;
        }
        void average(){
            cout<<mark/2;
        }    
         
};
int main(){
    school obj;
    obj.input();
    obj.display();
    obj.average();
}

