// PROGRAM NAME : Usage of Cascade Notation in dart
// By Clement C Johnson
// PROGRAM CODE:

class CascadeNotation {
  
  void firstFun(){
    print('The first Function is  called ');
   
  }
  
  void secondFun(){
    print('The second Function is called');
  }
}

void main(){
  
  CascadeNotation fun = new CascadeNotation();
  
  // The cascade notation (..) in Dart allows you to make a sequence of operations on the same object. 
  fun ..firstFun()
      ..secondFun(); 
}
