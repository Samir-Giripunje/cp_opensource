**From Samir Giripunje IIT Dharwad**

Here i am going to share the notes of OOPs which i have made.
It is for the Cpp
If you find any anamoly please share.

## Classes
 ```
 Classes are the blue-print or template for the object with the help of classes we can create the object.

 It is the group of the object which has common property or behaviour.
 ```

 ## Object
 ```
Object are the real world entity which has the which can have some characteristics or can do some tasks.
 ```

 ### Syntax fo Class
 ```
 class Person{
    string Name;
    int age;
 };
 ```
  Here
  
  Person:- Name of the class.<br/>
  Name, Age :- Property 

**Imp Points** <br/>

- Class always ends with the semi-colon.
- There can be only one public class in the one file.<br/>
- Public class should have same name as that of the file name.<br/>
- There can be multiple other classes.<br/>
- When the class is made the memeory is not allocated it is only in the code. Memory is only allocated when we make any object from that class.

<br/>

**Making new object**<br/>
 ```
To make the object we have to use the following syntax:-

       Person P1;                 //syntax

Here
Person:- Class Name
P1:- Object Name
 ```
Similarly multiple object can be made using the class 
```
 Person P1,P2;  
   
```
<br/>

**How to access the property of any created object**

```
It can be access with the help of the dot (".").Similarly proprty of all the object can be access.

P1.name=Samir;               //syntax
P1.age=21;
```
<br/>

**Sample Code**

```
#include<bits/stdc++.h>
using namespace std;

class Person {

   public:
   int age;
   string Name;  
};
int main()
{
    Person P1;
    P1.age=21;
    P1.Name="Samir";
    cout<<P1.Name<<" "<<P1.age;
    return 0;
}

Output:- Samir 21
```

<br/>
<hr>
<br/>

## *Behaviour*

It can be quite confusing with the behaviour . But the defination i got is what i am going to provide
.
```
Behaviors are the tasks that an object performs. 

Ex:- A person has age, name  as there property.
    It can have walk,talk as the behaviour 

* Properties are presented with different data types, and 
  behaviors are described using functions.
```

Example of the code:-
```
Given below is code where talk() and walk() are the behaviour of the object P1
```

```
//input
#include<bits/stdc++.h>
using namespace std;

class Person {

   public:
   int age;
   string Name;  

   void walk()
   {
    cout<<Name<<" can walk long distance."<<endl;
   }

    string talk()
   {
    return Name+" "+"is talking.";
   } 

};
int main()
{
    Person P1;
    P1.age=21;
    P1.Name="Samir";
    cout<<P1.Name<<" "<<P1.age;
    cout<<P1.walk()<<endl;
    cout<<P1.talk()<<endl;
    return 0;
}
```
```
Output:- Samir 21
         Samir can walk long distance.
         Samir is talking.
```
<br/>
<hr>
<br/>

## Polymorphism 

**Compile time Polymorphism**

Example:-
```
#include<bits/stdc++.h>
using namespace std;

class Person {

   public:
   int age;
   string Name; 
   string talk()
   {
    return Name+" "+"is talking";
   } 

   string talk(string temp)
   {
    return temp+" "+"is talking";
   } 
};
int main()
{
    Person P1;
    P1.age=21;
    P1.Name="Samir";
    cout<<P1.talk()<<endl;
    cout<<P1.talk("Samsritha")<<endl;
    return 0;
}
```
```
Output:-

Samir is talking
Samsritha is talking
```
```diff
+You can see that the talk is 2 functions here one with the parameter and other as empty you can see that the functions are behaving overall diffrently.
```

This is called as the polymorphism.


* The word polymorphism means having many forms. It describes the concept that different classes can be used with the same interface.

* Polymorphism is the ability of any data to be processed in more than one form.


**Polymorphism is divided into two types:**
- Compile Time Polymorphism
- Run Time Polymorphism
<br/>
<br/>

**Compile Time Polymorphism** - Compile time polymorphism, also known as Static Polymorphism, refers to the type of Polymorphism that happens at compile time. What it means is that the compiler decides what shape or value has to be taken by the entity in the picture.

*Real life Example*


Like a man at the same time is a father, a husband, an employee. So the same person possesses different behavior in different situations. This is called polymorphism.

**Note:-** Runtime will be explained afterward as it require the concept of inheritance.

<hr>
<br/>

```diff
!Now time has come to talk about the talk about the private , public and protected.
```

