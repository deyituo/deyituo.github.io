#include "X.hpp"
#include <iostream>

class X_impl: public X
{
private:

    X_impl(X_impl const &);
    X_impl & operator=(X_impl const &);

public:

    X_impl(){};
    
    virtual void f()
    {
      // ...
    }

    virtual void g()
    {
      // ...
    }
};

boost::shared_ptr<X> createX()
{
    boost::shared_ptr<X> px(new X_impl);
    return px;
}

