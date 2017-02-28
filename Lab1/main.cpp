using namespace std;
#include "Abonent.hpp"

int main(int argc, const char * argv[]) {
    
    abonent *ab  = new abonent("Anton","Solyarik","Sergeevich","Kiev","0635814472", 15, 50);
    char dataIn[] = "";
    ab -> getInfo();
    ab -> setAdress("Dagestan");
    ab -> setTelephoneNumber("0980840458");
    cout<<"Got this name from class: "<<ab -> getName()<<endl;
    ab -> getInfo();
    ab -> setAdress("K");
    cin>>dataIn;
    ab->setSurname(dataIn);
    ab -> getInfo();
    
    return 0;
}
