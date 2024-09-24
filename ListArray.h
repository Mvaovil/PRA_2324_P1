#include <ostream>
#include "List.h"

template <typename T> 
class ListArray : public List<T> {

    private:
	T* arr;
	int max;
	int n;    
	static const int MINSIZE;
	void resize(int new_size);
    public:
    	ListArray();
	~ListArray();
	T operator[](int pos) const override final;
	friend std::ostream& operator<<(std::ostream &out, const ListArray<T> &list);
	void insert(int pos, T e) override final;
	void insert(int pos, T e) override final;
	void prepend(T e) override final;
	T remove(int pos) override final;
	T get(int pos) override final;
	int search(T e) override final ;
	bool empty() override final ;
	int size() override final ;
};

template <typename T>
const int ListArray<T>::MINSIZE = 2;

template <typename T>
ListArray(){
	new T[MINSIZE];
	max=MINSIZE;
	n= 0;
}
template <typename T>
ListArray::~ListArray(){
	delete[] arr;
}
template <typename T>
T ListArray::operator[]int pos{
	if (pos<0 || pos>size()-1){
	throw std::out of range("Está fuera del intervalo [0,size()-1]";
	}else{
	return arr pos;
	}
}
template <typename T>
std::ostream& operatdor<<(std::ostream &out, const ListArray<T> &list){
	for(int i=0; i<list.n; i++){
	out << list.arr[i] << " ";
	} 	
	return out;		
}
template <typename T>
void resize(int new_size){
	T* new_arr = new T[new_size];
	for(int i=0; i<n;i++){
		new_arr[i]=arr[i];
	}
	delete[] arr;
	arr= new_arr;
	
	max=new_size
} 	

