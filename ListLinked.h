#include <ostream>
#include "List.h"
#include "Node.h"

template <typename T>
class ListLinked : public List<T> {
	private:
		Node<T>* first;
		int n;
	public:
		ListLinked();
		~ListLinked();
		T operator[](int pos);
		friend std::ostream& operator<<(std::ostream &out, const ListLinked<T> &list) {
			out << "List => [";
			if(list.n > 0) {
				Node<T>* aux = list.first;
				while(aux != nullptr) {
					out  << std::endl << aux->data;
					aux = aux->next;
				}
				out << std::endl;
			}
			out << "]\n\n";
			return out;
		}
		void insert(int pos, T e) override;
		void append(T e) override;
		void prepend(T e) override;
		T remove(int pos) override;
		T get(int pos) override;
		int search(T e) override;
		bool empty() override;												        int size() override;
};

