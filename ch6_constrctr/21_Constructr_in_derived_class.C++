/*  Constructors in derived classes:
1.We can use constructors in derived class in C++
2.if base class constructor doesn't have any arguments , there is no need of any constructor in derived class
3.but if there are one or more arguments in the base class constructor, derived class need to pass arguments to the base class constructor.
4.if both base and derived classes have constructors, base class constructor is executed first.
*/

/* Constructors in multiple and multilevel inheritance:
1.In multiple inheritance, base classes are constructed in the order in which they appear in the class declaration
2.In multilevel inheritance, the constructors are executed in the order of inheritance.(In the order: first base to last derived class)
*/

/*Special Syntax:
derived-constructor(arg1,ag2,arg3,......): base1-constructor(arg1,arg2),base2-constructor(arg3,arg4){
}base1-constructor(arg1,arg2)

1. C++ supports an special syntax for passing arguments to multiple base classes.
2. The constructor of the derived class receives all the arguments at once and then will pass the calls to the respective base classes.
3. The body is called after all the constructors are finished executing.
*/

/* Special case of Virtual Base class:
1. the constructors for virtual base classes are invoked before an nonvirtual class.
2. If there are multiple virtual base classes , they are invoked in the order declared.
3. Any non-virtual base classes are then constructed before the derived class constructor is executed.
*/