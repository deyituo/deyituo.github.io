#include <iostream>
#include <boost/shared_ptr.hpp>                                                                         
                                                                                                                       
// This example demonstrates "the Using abstract classes for implementation hiding"                                    
// from http://www.boost.org/doc/libs/1_61_0/libs/smart_ptr/sp_techniques.html                                         

class X                                                                                                                
{
public:

    virtual void f() = 0;
    virtual void g() = 0;
                                                                                                                       
protected:

    ~X() { std::cout<< "destructing X."<< std::endl; }                                                                                                            
};
  
boost::shared_ptr<X> createX();                                                                                               
