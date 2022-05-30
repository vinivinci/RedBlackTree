#include <iostream>
#include "RedBlackTree.cpp"

using namespace std;

bool verifyValue(int value){
    return value != 0;
}
void writeOptions(){
  cout<<"Select one option:"<<endl;
  cout<<"1- Insert"<<endl;
  cout<<"2- Show pre order"<<endl;
  cout<<"3- Show in order"<<endl;
  cout<<"4- Show minimum"<<endl;
  cout<<"5- Show maximum"<<endl;
  cout<<"6- Show successor"<<endl;
  cout<<"7- Show predecessor"<<endl;
  cout<<"8- Left Rotate"<<endl;
  cout<<"9- Right Rotate"<<endl;
  cout<<"10- Show a root"<<endl;
  cout<<"11- Delete a node"<<endl;
  cout<<"12- Print tree"<<endl;
  cout<<"Option: ";
}
int main() {
  RedBlackTree bst;
  int value = 0;
  int option = 0;
  do
  {
     writeOptions();
     cin>>option;
     switch (option)
     {
     case 1:
         system("cls || clear");
         cout<<"Value to insert: ";
         cin>>value;
         if(verifyValue(value)){
            bst.insert(value);
         }
         break;
     case 12:
        system("cls || clear");
        bst.printTree();
        break;
     default:
        system("cls || clear");
        cout<<"INVALID OPTION"<<endl;
        break;
     }
  } while (option!= 4);
  
}