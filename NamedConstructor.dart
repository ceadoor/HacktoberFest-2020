// PROGRAM NAME : Usage of named constructor in dart
// By Clement C Johnson
// PROGRAM CODE :

class NamedConstructor {
  String name;
  int age;
  String address;
  
  //By using named constructor you can create multiple constructors in the same class.
  //Each constructor will have a unique name. 
  //So that you can identify each of them.
  
  NamedConstructor.details({this.name, this.age});
  
  NamedConstructor.address({this.name ,this.age , this.address}){
    print(this.name);
    print(this.age);
    print(this.address);
  } // constructor body 
  
  void prtDetails(){
    print(this.name);
    print(this.age);
  }
}

void main() {
  
  NamedConstructor obj = new NamedConstructor.details(name : 'Akhil' , age : 15);
  
  obj.prtDetails();
  
  NamedConstructor obj2 = new NamedConstructor.address(name : 'Manu' , age:  10 , address : 'New valley');
  
}
