#include<iostream>
#include<fstream>
using namespace std;
void printWords(string filename) {
   fstream file;
   string word;
   file.open(filename.c_str());
   while(file >> word) { //reading and printing all the words in the file.
     cout<<word<<endl;
   }
   file.close();
}
int main() {
   string name;
   cout << "Enter filename: ";
   cin >> name;
   printWords(name);
   return 0;
}
