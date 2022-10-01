// Merlyn Pothen
#include <iostream>
using namespace std;
int main() {

  // user input
 string a,b,c,d,e,f,g,h;

  // enter nouns
  cout << "Enter two nouns: ";
  cin >> a;
  cin >> b;

  // enter verbs
  cout << "Enter two verbs: ";
  cin >> c;
  cin >> d;

  // enter adjectives
  cout << "Enter four adjectives: ";
  cin >> e;
  cin >> f;
  cin >> g;
  cin >> h;

  // print results
  cout << "Modified text: Smooth like " << a << ", like a " << b << " undercover, " << endl << "Gon' " << c << " like trouble, " << d << " into your heart like that." << endl << e << " shade, " << f << ", yeah, I owe it all to my mother, " << endl << g << " like summer, yeah, I'm making you " << h << " like that.";
  
  return 0;
}