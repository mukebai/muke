#include <iostream>

using namespace std;
class Rm{
public:
    void setnum(int a){
    for(int i=0;i<a;i++){
        cout<<"Hello,RoboMaster!"<<endl;
    }
    }
};
int main(){
int a;
    cin>>a;
    Rm robomaster;
    robomaster.setnum(a);
    return 0;
}

