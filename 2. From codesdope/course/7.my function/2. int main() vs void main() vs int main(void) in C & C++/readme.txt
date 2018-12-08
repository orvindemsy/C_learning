Like any other function, main is also a function but with a special characteristic that the program execution always starts from the ‘main’. ‘int’ and ‘void’ are its return type. So, let’s discuss all of the three one by one.

void main – The ANSI standard says "no" to the ‘void main’ and thus using it can be considered wrong. One should stop using the ‘void main’ if doing so.
int main – ‘int main’ means that our function needs to return some integer at the end of the execution and we do so by returning 0 at the end of the program. 0 is the standard for the “successful execution of the program”.
main – In C89, the unspecified return type defaults to int. So, main is equivalent to int main in C89. But in C99, this is not allowed and thus one must use int main.
So, the preferred way is int main.

Lik