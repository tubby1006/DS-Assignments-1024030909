#include<iostream>
using namespace std;

class Stack{
	
	private:
		int top, cap;
		int* a;
	
	public:
		
		Stack(int cap){
			this->cap = cap;
			top = -1;
			a = new int[cap];
		}
		
		~Stack(){
			delete[] a;
		}
		
		bool push(int x){
			
			if(top >= cap-1){
				cout<<"Stack Overflow";
				return false;
			}
			
			a[++top] = x;
			return true;
		}
		
		int pop(){
			if(top < 0){
				cout<<"Stack Underflow";
				return -1;
			}
			
			return a[top--];
		}
		
		int peek(){
			if(top < 0){
				cout<<"stack is empty";
				return 0;
			}
			return a[top];
		}
		
		bool isEmpty(){
			return top < 0;
		}
		
		bool isFull() {
			return top >= cap - 1;
		}
		
		void display(){
			
			if(isEmpty()){
				cout<<"Stack Empty";
				return;
			}
			
			for(int i = 0; i <= top ; i ++){
				cout<<a[i]<<" ";
			}
			
		}
		
};

int main(){
	int size;
	cout << "Enter size of the stack: ";
	cin >> size;

	Stack s(size);
	int choice, val;

	do {
		cout << "\n\n=== Stack Menu ===\n";
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Peek\n";
		cout << "4. Check if Stack is Empty\n";
		cout << "5. Check if Stack is Full\n";
		cout << "6. Display Stack\n";
		cout << "7. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		switch(choice) {
			case 1:
				cout << "Enter value to push: ";
				cin >> val;
				if (s.push(val)) {
					cout << val << " pushed to stack.";
				}
				break;

			case 2:
				val = s.pop();
				if (val != -1)
					cout << val << " popped from stack.";
				break;

			case 3:
				cout << "Top element is: " << s.peek();
				break;

			case 4:
				cout << (s.isEmpty() ? "Stack is Empty" : "Stack is not Empty");
				break;

			case 5:
				cout << (s.isFull() ? "Stack is Full" : "Stack is not Full");
				break;

			case 6:
				cout << "Elements in stack: ";
				s.display();
				break;

			case 7:
				cout << "Exiting program.";
				break;

			default:
				cout << "Invalid choice. Please try again.";
		}
	} while(choice != 7);

	return 0;
}

