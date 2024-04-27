#include<stdio.h>
const char* myName();
int main(){
    myName();

}
const char* myName() {
  static const char *name = "Hello World";
  return name;
}