#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Exception{
  private: 
    int Id;
    string Comment;

  public:
    Exception(int id,string comment){
      Id=id;
      Comment=comment;
    };

    int GetId(){
      return Id;
    };
    
    string GetComment(){
      return Comment;
    };
};

class DigitContainer{
  private:
    //vector<unsigned short int> Digits;
    vector<unsigned int> Counter;
    short int Digits;

    unsigned long int Factorial(unsigned int n){
      unsigned long int result=1;
      for(unsigned long int i=1; i<=n; i++){
        result=result*i;
      };
      return result;
    };

  public:
    DigitContainer(string snumber){

      Counter.resize(256,0);
      //string snumber=to_string(number);
      Digits=snumber.size();
      for(int i=0; i<Digits; i++){
        Counter[(snumber[i])]++;
      };
    };

    unsigned long int GetNrPerm(){
      unsigned long int resultl=Factorial(Digits);
      unsigned long int resultm=1;
      for(int i=0; i<256; i++)
        if(Counter[i]>0){
          resultm=resultm*Factorial(Counter[i]);
        };
      return (resultl/resultm);
    };
};

int main(int argc,char *argv[]){
  try{
    if(argc<2)
      throw new Exception(1,"Please provide input number.");

    for(int i=1; i<argc; i++){
      string number=argv[i];
      int numbersize=number.size();

      //unsigned int number=stoi(argv[i]);
      DigitContainer digits(number);
      cout<<"Input nr: "<<number<<" output posiibiles: "<<digits.GetNrPerm()<<endl;;
    };

return 0;
  }
  catch(Exception exception){
    cout<<"Error id: "<<exception.GetId()<<endl;
    cout<<exception.GetComment()<<endl;
    return exception.GetId();
  };
};