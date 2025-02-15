// #include<iostream>
// int main(){
//     std::string food[] ={"Egg chicken roll" , "Paneer tikka" ,"Garlic naan"};
//     std::cout<<sizeof(food)/sizeof(std::string)<<" items";
//     return 0;
// }
// Iterate over an array
// #include <iostream>
// int main()
// {
//     std::string food[] = {"Egg chicken roll", "Paneer tikka", "Garlic naan" , "Fried rice"};
//     for (int i = 0; i < sizeof(food) / sizeof(std::string); i++)
//     {
//         std::cout << food[i] << '\n';
//     }

//     return 0;
// }
// foreach loop
// #include <iostream>
// int main(){
//     std::string food[] = {"Egg chicken roll", "Paneer tikka", "Garlic naan" , "Fried rice"};
//     for (std::string food: food){
//         std::cout << food << '\n';
//     }
// }
// Pass array to a function
// #include <iostream>
// double getTotal(double prices[], int size);
// int main()
// {
//     double prices[] = {8.9, 40, 48.6, 543.4, 54.8};
//     int size = sizeof(prices) / sizeof(double);
//     double total = getTotal(prices, size);
//     std::cout << total;
//     return 0;
// }
// double getTotal(double prices[], int size)
// {
//     double total = 0;
//     for (int i = 0; i < size; i++)
//     {
//         total += prices[i];
//     }
//     return total;
// }
// Search an array for an element
// #include <iostream>
// int searchArray(int array[],int size,int element);
// int main(){
//     int numbers[] = {1, 2, 3, 4, 5,6,7,8,9,10};
//     int size = sizeof(numbers)/sizeof(numbers[0]);
//     int index;
//     int myNum;

//     std::cout <<"Enter the search element:" <<'\n';
//     std::cin >> myNum;
//     index = searchArray(numbers, size, myNum);
//     if(index != -1){
//         std::cout<< myNum <<" is at index " << index;
//     }
//     else{
//         std::cout<< myNum <<" is not in array";
//     }
//     return 0;
// }
// int searchArray(int array[],int size,int element){
//     for (int i = 0; i < size; i++)
//     {
//         if (array[i] == element)
//         {
//             return i;
//         }

//     }
//     return -1;
// }
// Sort an array
// #include <iostream>
// void sort(int array[],int size);
// int main(){
//     int array[] = {64, 34, 25, 12, 22, 10 , 1 , 6};
//     int size = sizeof(array)/sizeof(array[0]);
//     sort(array, size);
//     for (int element : array)
//     {
//         std::cout << element << " ";
//     }

//     return 0;
// }
// void sort(int array[],int size){
//     int temp;
//     for (int i = 0; i < size -1 ;i++){
//         for (int j = 0; j < size - i - 1; j++){
//             if (array[j] > array[j+1])
//             {
//                 temp = array[j];
//                 array[j] = array[j+1];
//                 array[j+1] = temp;
//             }

//     }
// }
// }

// Fill() function
// #include <iostream>
// int main()
// {
//     const int size = 150;
//     std::string foods[size];
//     fill(foods, foods + (size / 2), "Raktim");
//     fill(foods + (size / 2), foods + size, "Biswas");

//     for (std::string items : foods)
//     {
//         std::cout << items << '\n';
//     }

//     return 0;
// }

// Input data in array
//  #include <iostream>
//  #include <string>
//  int main(){
//      std::string items[5];
//      int size = sizeof(items)/sizeof(items[0]);
//       std::cin.ignore();
//      for (int i = 0; i < size; i++)
//      {
//          std::cout<<"Enter a item " << i+1 <<" : ";
//          std::getline(std::cin,items[i]);
//      }
//      std::cout<<"Your items are:\n";
//      for(std::string item : items){
//          std::cout<<item<<'\n';
//      }
//      return 0;
//  }
// 2D array
// #include <iostream>
// int main()
// {
//     std::string foods[][3] = {{"India", "Garlic nan", "Butter chicken"},
//                               {"Japan", "Sushi", "Ramen"},
//                               {"USA", "KFC", "MC"}};
// std::cout<< foods[0][0]<<" ";
// std::cout<< foods[0][1]<<" ";
// std::cout<< foods[0][2]<<" \n";
// std::cout<< foods[1][0]<<" ";
// std::cout<< foods[1][1]<<" ";
// std::cout<< foods[1][2]<<" \n";
// std::cout<< foods[2][0]<<" ";
// std::cout<< foods[2][1]<<" ";
// std::cout<< foods[2][2]<<" \n";
//     int rows = sizeof(foods) / sizeof(foods[0]);
//     int columns = sizeof(foods[0]) / sizeof(foods[0][0]);
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             std::cout << foods[i][j] << "           ";
//         }
//         std::cout << "\n";
//     }
//     return 0;
// }

// Memory address
//  #include<iostream>
//  int main(){
//      int num = 98;
//      std::cout<< &num <<'\n';
//      return 0;
//  }

// Swap two values using memory address
//  #include<iostream>
//  void swap(int &num1,int &num2);
//  int main(){
//      int num1 = 10;
//      int num2 = 20;
//      swap(num1,num2);
//      std::cout<< "num1:"<<num1 << '\n';
//      std::cout<< "num2:"<<num2;
//      return 0;
//  }
//  void swap(int &num1,int &num2){
//      int temp = num1;
//      num1 = num2;
//      num2 = temp;
//  }

// Const parameter
//  #include<iostream>
//  void printInfo(const std::string name,const int age);
//  int main(){
//      std::string name = "Raktim";
//      int age = 19;
//      printInfo(name,age);
//      return 0;
//  }
//  void printInfo(const std::string name,const int age){
//      std::cout<< "Name: "<< name <<'\n';
//      std::cout<< "Age: "<< age <<'\n';
//  }
// Pointer
//  #include<iostream>
//  int main(){
//'&' address of operator
//'*' dereference operator
//  std::string name = "Raktim";
//  std::string *pName = &name;
//  std::cout << pName;
//  To access the address of the variable
//  std::cout << *pName;
//  To access the value of the variable
//  return 0;
// }
// Null Pointer
// #include <iostream>
// int main()
// {
//     int *pointer = nullptr;
//     int x = 123;
//     // pointer = &x;
//     if (pointer == nullptr)
//     {
//         std::cout << "Address was't assigned" ;
//     }
//     else{
//         std::cout<< "Address was assigned";
//     }
//     return 0;
// }

// Dynamic memory allocation
// #include <iostream>
// int main(){
//     int *pNum = NULL;
//     pNum = new int;
//     *pNum = 123;
//     std::cout<< "Address:" << pNum <<'\n';
//     std::cout<< "Value:" << *pNum;
//     delete pNum;
//     return 0;
// }
// an example of dynamic memory allocation
// #include <iostream>
// int main(){
//     char *pGrades = NULL;
//     std::cout<<"How many grades do you want to enter?";
//     int size;
//     std::cin>>size;
//     pGrades = new char[size];
//     for (int i = 0; i < size; i++)
//     {
//         std::cout<<"Enter grade #"<<i+1<<":";
//         std::cin>>pGrades[i];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         std::cout <<pGrades[i]<< '\n';
//     }
//     delete[] pGrades;
    
// }

//Recursion
// #include <iostream>
// void walk(int steps);
// int main(){
//     walk(100);
//     return 0;
// }
// void walk(int steps){
//     if(steps > 0){
//         std::cout << "You just take a step !\n";
//         walk(steps -1);
//     }
// }
//An example of Recursion
// #include <iostream>
// int factorial(int num);
// int main(){
// std::cout<<factorial(10);
//     return 0;
// }
// int factorial(int num){
//     int result = 1;
//     for (int i = 1; i <= num; i++)
//     {
//         result = result * i;
//     }
//     return result;
// }

//Function template
// #include <iostream>
// template <typename Thing>
// Thing max(Thing x,Thing y){
//     return (x > y) ? x : y;
// }
// int main(){
//     std::cout<<max('A','B')<<'\n';
//     return 0;
// }

// Struct
// #include <iostream>
// struct Student{
//     std::string name;
//     int age;
//     double gpa;
// };
// int main(){
//     Student student1;
//     student1.name = "Frost Fern";
//     student1.age = 87;
//     student1.gpa = 0.5;
//     std::cout<<"Name: "<<student1.name<<'\n';
//     std::cout<<"Age: "<<student1.age<<'\n';
//     std::cout<<"GPA: "<<student1.gpa<<'\n';
//     std::cout<<'\n';
//     Student student2;
//     student2.name = "Byte Crafter";
//     student2.age = 7;
//     student2.gpa = 9.5;
//     std::cout<<"Name: "<<student2.name<<'\n';
//     std::cout<<"Age: "<<student2.age<<'\n';
//     std::cout<<"GPA: "<<student2.gpa<<'\n';
//     return 0;
// }

// Pass Struct as argument
// #include <iostream>
// void printCar(struct car &car);
// void paintCar(struct car &car , std::string colour);
// struct car{
//     std::string model;
//     int year;
//     std::string color;
// };
// int main(){
//     car car1 = {"BMW", 2021, "Black"};
//     car car2 = {"Audi", 2020, "White"};

//     paintCar(car1,"Red"); //Change the color of car1
//     std::cout<<'\n';

//     printCar(car1);
//     std::cout<<'\n';
//     printCar(car2);
//     return 0;
// }
// void printCar(struct car &car){
//     std::cout<<"Model: "<<car.model<<'\n';
//     std::cout<<"Year: "<<car.year<<'\n';
//     std::cout<<"Color: "<<car.color<<'\n';
// }
// void paintCar(struct car &car , std::string colour){
//     car.color = colour;
// }

//Enums
//Enums = a set of named integer constants
// #include <iostream>
// enum Day {Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6, Sunday = 0};
// int main(){
//     Day today = Monday;
//     switch (today)
//     {
//     case Sunday:
//         std::cout<<"Today is Sunday";
//         break;
//     case Monday:
//         std::cout<<"Today is Monday";
//         break;
//     case Tuesday:
//         std::cout<<"Today is Tuesday";
//         break;
//     case Wednesday:
//         std::cout<<"Today is Wednesday";
//         break;
//     case Thursday:
//         std::cout<<"Today is Thursday";
//         break;
//     case Friday:
//         std::cout<<"Today is Friday";
//         break;
//     case Saturday:
//         std::cout<<"Today is Saturday";
//         break;
    
//     default:
//         std::cout<<"Invalid day";
//         break;
//     }
//     return 0;
// }

//Object Oriented Programming
// #include <iostream>
// class Human{
//     public:
//     std::string name;
//     std::string occupation;
//     int age;
//     void sleep(){
//         std::cout<<"This Person is sleeping\n";
//     }
//     void eat(){
//         std::cout<<"This Person is eating\n";
//     }
//     void talk(){
//         std::cout<<"This Person is talking\n";
//     }
// };
// int main(){
//     Human human1;
//     human1.name = "Frost Fern";
//     human1.occupation = "Software Developer";
//     human1.age = 87;
//     std::cout<<"Name: "<<human1.name<<'\n';
//     std::cout<<"Occupation: "<<human1.occupation<<'\n';
//     std::cout<<"Age: "<<human1.age<<'\n';
//     human1.sleep();
//     return 0;
// }

//Constructor
// #include <iostream>
// class Student{
//     public:
//     std::string name;
//     int age;
//     double gpa;
//     Student(std::string name, int age, double gpa){
//         this->name = name;
//         this->age = age;
//         this->gpa = gpa;
//     }
// };
// int main(){
//     Student student1("Frost Fern", 87, 0.5);
//     std::cout<<"Name: "<<student1.name<<'\n';
//     std::cout<<"Age: "<<student1.age<<'\n';
//     std::cout<<"GPA: "<<student1.gpa<<'\n';
//     return 0;
// }

//Constructor Overloading
// #include <iostream>
// class pizza{
//     public:
//     std::string topping1;
//     std::string topping2;
//     pizza(){}
//     pizza(std::string topping1){
//         this->topping1 = topping1;
//     }
//     pizza(std::string topping1, std::string topping2){
//         this->topping1 = topping1;
//         this->topping2 = topping2;
//     }
// };
// int main(){
//     pizza pizza1("Cheese");
//     pizza pizza2("Cheese","Tomato");
//     pizza pizza3;
//     std::cout<<"Pizza 1: "<<pizza1.topping1<<'\n';
//     std::cout<<"Pizza 2: "<<pizza2.topping2<<'\n';
//     return 0;
// }

//Getter and Setter
// #include <iostream>
// class Stove{
//     private:
//         int temperature;
//     public:
//         int getTemperature(){ //Getter
//             return temperature;
//         }
//     void setTemperature(int temperature){ //Setter
//         this->temperature = temperature;
//     }
// };
// int main(){
//     Stove stove;
//     stove.setTemperature(200);
//     std::cout<<"Temperature: "<<stove.getTemperature()<<'\n';
//     return 0;
// }

//Inheritance
#include <iostream>
class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout<<"This animal is eating\n";
    }
};
class Dog : public Animal{
    public:
    void bark(){
        std::cout<<"This dog is barking\n";
    }
};
int main(){
    Dog dog;
    std::cout<<dog.alive<<'\n';
    dog.eat();
    dog.bark();
    return 0;
}