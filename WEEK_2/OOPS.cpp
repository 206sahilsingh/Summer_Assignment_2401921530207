#include <iostream>
using namespace std;

// Interface
class Playable{
public:
    virtual void play() = 0;
};

// Veena class
class Veena :public Playable{
public:
    void play(){
        cout <<"Playing Veena"<< endl;
    }
};

// Saxophone class
class Saxophone :public Playable{
public:
    void play(){
        cout <<"Playing Saxophone"<< endl;
    }
};

int main(){
    Veena v;
    v.play();

    Saxophone s;
    s.play();

    Playable *p;

    p =&v;
    p->play();

    p =&s;
    p->play();

    return 0;
}
