# Why nullptr?

Before nullptr, there was NULL, which can be 0, or (void*)0.

So...

If the compiler defines NULL as (void*)0;
Then this cannot be compiled (Since implicit conversion of a void* is not allowed.):

## int* an_integer = NULL;

If the compiler defines NULL as 0;
There is a counter-intuitive call happens "foo(NULL);" is called:

- foo(int);
- foo(char*);

We called it with a NULL pointer, but an integer counterpart is called. Wow.

Thanks C++11 for nullptr.