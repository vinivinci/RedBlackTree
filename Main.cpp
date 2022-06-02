#include <iostream>
#include "RedBlackTree.cpp"

using namespace std;

bool verifyValue(int value){
    return value != 0;
}
int readInputValue(string method){
   int value = 0;
   cout<<"Value to " <<method<< ": ";
   cin>>value;
   return value;
}
void writeOptions(){
  cout<<"Select one option:"<<endl;
  cout<<"1- Insert"<<endl;
  cout<<"2- Show pre order"<<endl;
  cout<<"3- Show in order"<<endl;
  cout<<"4- Show post order"<<endl;
  cout<<"5- Delete a node"<<endl;
  cout<<"6- Print tree visualization"<<endl;
  cout<<"7- Exit"<<endl;
  cout<<"Option: ";
}
int main() {
  RedBlackTree bst;
  int value = 0;
  int option = 0;
  do
  {
     int value = 0;
     writeOptions();
     cin>>option;
     switch (option)
     {
     case 1:
         system("cls || clear");
         value = readInputValue("Insert");
         if(verifyValue(value)){
            bst.insert(value);
         }
         break;
      case 2:
         system("cls || clear");
         bst.preorder();
         cout<<endl;
         break;
      case 3:
         system("cls || clear");
         bst.inorder();
         cout<<endl;
         break;
      case 4:
         system("cls || clear");
         bst.postorder();
          cout<<endl;
         break;
      case 5 :
         system("cls || clear");
         value = readInputValue("Delete");
         if(verifyValue(value)){
            bst.deleteNode(value);
         }
         break;
     case 6:
        system("cls || clear");
        bst.printTree();
        cout<<endl;
        break;
     default:
        system("cls || clear");
        cout<<"INVALID OPTION"<<endl;
        break;
     }
  } while (option!= 7);
  
}