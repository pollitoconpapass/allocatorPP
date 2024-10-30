
## Pass by value
`"Its the common one we all use..."`

- Example
```cpp
void greeting(string name, int age){
    cout << "Welcome " << name << "you're " << age << "years old" << endl;
}

int main(){
    string name = "Ada";
    int age = 35;

    greeting(name, age);
}
```

### What's the problem with this? 

When you have a function that changes the value of a variable, the change will only occur in the function. 

So, if you try to access the variable after the function, the changes will not persist. 

## Pass by reference
`"Referencing the address variable to make the changes persist"`

This solves the 'issue' of above. By passing the address the changes are made 'globally' and will persist even after the function was executed. 

- Example: See the `reference.cpp` file.


## Pass by address
`"Referencing the address variable to make the changes persist"`

It's almost the same approach of `Passing by reference` but using pointers. 

It's not recommended to use address. References (&) are often preferred over pointers when possible


### When to use Pass by address


Here are several common scenarios where pass by address (pointer) is useful in C++:

1.  When you need to modify multiple values in a function

```cpp
void getCoordinates(int* x, int* y) {
    // Modifies both x and y coordinates
    *x = calculateX();
    *y = calculateY();
}

int main() {
    int x, y;
    getCoordinates(&x, &y);  // Both values are updated
}
```

2. Working with large objects to avoid copying (though references are preferred)

```cpp
void processLargeArray(int* arr, int size) {
    // Modifies array without copying it
    for(int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int arr[1000];
    processLargeArray(arr, 1000);
}
```

3. Dynamic Memory Allocation

```cpp
void createArray(int** arr, int size) {
    *arr = new int[size];  // Allocate memory
    for(int i = 0; i < size; i++) {
        (*arr)[i] = i;
    }
}

int main() {
    int* dynamicArray;
    createArray(&dynamicArray, 10);
    // Use array
    delete[] dynamicArray;
}
```

4. Implementing different Data Structures (like linked lists)
```cpp
struct Node {
    int data;
    Node* next;
};

void insertNode(Node** head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

int main() {
    Node* head = nullptr;
    insertNode(&head, 5);  // Modifies the head pointer
}
```

