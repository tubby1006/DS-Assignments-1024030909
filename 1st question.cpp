#include<iostream>

using namespace std;


void createArray(int (&arr)[10]){
	
	cout<<"Enter 10 elements"<<endl;     
	for(int i = 0; i < 10; i++){
		cin>>arr[i];
	}
				   
}

void displayArray(int arr[],int count){
	
	cout<<"Array:"<<endl;
	for(int i = 0 ; i < count; i ++){
		cout<<arr[i]<<" ";
	
	}
	
	cout<<endl;
}

void insertElement(int (&arr)[10],int count){
	
	
	int pos;
	int element;
	
	cout<<"Position to Insert(1 - 10)--> "<<endl;
	cin>>pos;
	
	cout<<"Enter the Element --> ";
	cin>>element;
	
	if(pos > 10){
		cout<<"invalid"<<endl;
		return;
	}
	
	for(int i = count -1; i >= pos-1; i--){
		arr[i] = arr[i-1];
	}
	
	 arr[pos-1] = element;
	
	
}

void deleteElement(int (&arr)[10],int count){
	
	int pos;
	cout<<"Enter the position of the element you want to delete --> ";
	cin>>pos;
	
	if(pos > count-1){
		cout<<"Invalid"<<endl;
		return;
	}
	
	for(int i = pos-1 ; i < count; i++){
		arr[i] = arr[i+1];
	}
	
	return;
	
	
}

void searchElement(int arr[10],int count){
	
	int element;
	cout<<"Enter the element you want to search --> ";
	cin>>element;
	
	for(int i = 0 ; i < count ; i++){
		
		if(arr[i] == element){
			cout<<"element found at position "<<i+1<<endl;
			return;
		}
		
	}
	
	cout<<"Element not found"<<endl;
	return;
	
}


int main(){
	
	int arr[10];
	int count = 10;
	int op;
	int created = 0;
	  
	  while(op != 6){
	  	
			cout<<"Create Array(1), Display Array(2), Insert an element(3), Delete an element(4), Linear Search(5), Exit(6) --> ";
		    cin>>op;
		  
		  switch(op){
		  	
		  	case 1: if(created == 0){
				createArray(arr);
				created = 1;
			  } 
		  	else cout<<"Array already created"<<endl;
		  	
		  	break;
		  	case 2: if (created == 1) displayArray(arr,count);
		  	break;
		  	case 3: 
			  if(created == 1){
			  	 if(count == 10) cout<<"array already full"<<endl;
			  else insertElement(arr,count);
		  	  break;
			  }
			  
			  else cout<<"Array not created"<<endl;
			  break;
		  	
		  	case 4: if(created == 1){
		  	
			  if(count != 0) {
			  deleteElement(arr,count);
			  count--;
			}
			else cout<<"There are no elements left"<<endl;	
				break;
			  }
			  
			else cout<<"Array not created"<<endl;
		  	break;
		  	case 5: if(created == 1 && count > 0) searchElement(arr,count);
		  	else cout<<"No elements"<<endl;
		  	break;
		  	case 6: break;
		  	default : cout<<"invalid";
		  	
	  }
	  
	  
	  	
	  }
	  
	  
	  
	  
	  
	  
	  
	  
	  
	
}
