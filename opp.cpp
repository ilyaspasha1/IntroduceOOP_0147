#include <iostream>
using namespace std;
class planet{
  private:
        float gravitasi;
  public:

     string nama;
     float diameter;

     void displaydata(){
        cout<<"hallo aku planaet"<<nama<<","<<"akuranku"<<diameter<< "gravatasiiku" <<gravitasi<<endl;
     }
    void inputdata ()
    {
         cout <<"input nama:";
         cin >>nama;
         cout <<"iput akuranku:";
         cin>>diameter;
         cout<<"inputgravitiku: ";
         cin>>gravitasi;

}
    };

int main (){
    planet venus;
    venus.nama;
    venus.inputdata ();
    cout<<"nameanya adalh"<<venus.nama<<endl;
    cout<<"diameter adalh"<<venus.diameter<<endl;
    venus.displaydata();


}