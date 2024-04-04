

// Template Class
template <class T>
class Stack
{
private:
    int top;
    int size;
    T *ptr;
    static int counter;
public:
    Stack();
    Stack(int n);
    ~Stack();
    static int getCounter();
    Stack(Stack &);
    void push(T);
    T pop();
    Stack& operator = (Stack&);
    friend void viewContent(Stack);
};

template <class T>
Stack<T>::Stack()
{
    top = 0;
    size = 10;
    ptr = new T[size];
    counter++;
}

int main() {
    Stack<int> s1(5);

    Stack<char> s2;
}