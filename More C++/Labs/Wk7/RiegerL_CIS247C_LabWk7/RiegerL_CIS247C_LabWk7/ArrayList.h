#pragma once
template <class T>
class ArrayList
{
private:
	// attributes
	const static int DEFAULT_SIZE = 5;	//initial size constant
	T* list;			// pointer to the array
	int count;			// number of items in the list
	int capacity;		// current size in memory
public:
	// constuctors
	ArrayList(void)
	{
		this->list = new T[DEFAULT_SIZE];	// dynamic array set to default size
		this->capacity = DEFAULT_SIZE;		// capacity set to default size (current size of array)
		this->count = 0;
	}

	ArrayList(int initialCapacity)
	{
		this->list = new T[initialCapacity];	// dynamic array set to given initial capacity
		this->capacity = initialCapacity;		// capacity set to given size (bc that is current size of internal array)
		this->count = 0;						// set to 0 bc ArrayList has no data as of yet
	}

	// destructor
	~ArrayList(void)
	{
		//as the dynamic array was created on memory heap, have to destroy array
		// or array will remain on heap & will have memory leak
		// delete the array pointer
		if (this->list != nullptr)		// if array is set to nullptr
		{
			delete[] this->list;	// if not destroy array
			this->list = nullptr;	// set array pointer to nullptr
		}
	}

	/// Determine if the ArrayList is empty
	// returns boolean is ArrayList empty or not?
	bool isEmpty(void)
	{
		return count == 0;		// array is empty if it has zero items
	}

	/// Get the item at the given position
	// grabbing the data at the requested position
	T get(int position)
	{
		if (position < count)
		{
			return list[position];
		}
		else
		{
			return NULL;
		}
	}

	///adding item to the ArrayList
	// creating bigger ArrayList to copy data into
	void add(T data)
	{
		// if the array is full, then you double the size
		if (count == capacity)
		{
			// create a bigger array
			capacity = 2 * capacity;		// double the size
			T* temp = new T[capacity];		// template ptr to new array w\ double capacity

			// copy items from current array to bigger array
			for (int i = 0; i < count; i++)
			{
				temp[i] = list[i];
			}

			// delete the current array
			delete[] list;

			// rename the bigger array to current array name
			list = temp;
		}

		// add the new data item to the array
		list[count] = data;

		// increment the count
		count++;
	}

	/// Remove item at any given point
	void removeAt(int position)
	{
		// replace every item from that positon on w/ the next item
		for (int i = position; i < count - 1; i++)	// notice "count - 1" to copy last item to next to last position
		{
			list[i] = list[i + 1];
		}

		// decrease the item count
		count--;
	}

	/// Get the count of items in ArrayList
	int getCount(void)
	{
		return count;
	}

	/// Get ArrayList current capacity
	int getCapacity(void)
	{
		return capacity;
	}

};


