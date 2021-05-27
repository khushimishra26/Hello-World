#include<iostream>
#include<fstream>
using namespace std;
void countWords(string filename) {
   fstream file;
   string word;
   int count=0;
   file.open(filename.c_str());
   while(file >> word) { //reading and counting all the words in the file.
      count++;
   }
   cout<<"Total words in the file are: "<<count<<endl;
   file.close();
}
int main() {
   string name;
   cout << "Enter filename: ";
   cin >> name;
   countWords(name);
   return 0;
}
