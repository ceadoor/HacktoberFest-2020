//PROGRAME NAME : Usage of named parameter in Dart
// By Clement C Johnson
// PROGRAME CODE :

class NamedParameter {
  String name;
  int age;
  
  NamedParameter({this.name, this.age}); // Constructor that uses named parameter 
  
  void prtDetails(){
    print(this.name);
    print(this.age);
  }
}

void main() {
  
  NamedParameter details = new NamedParameter(name : 'Akhil' , age : 14);
  
  details.prtDetails();
  
  }
