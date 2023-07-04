#include <iostream>
#include <vector>
#include <list>
#include <set>


template <class T, class U>
void print_container(const T& container, const U& divider)
{
	bool isStart = true;

	for (auto it = container.begin(); it != container.end(); ++it)
	{
		if (isStart)
		{
			std::cout << *it;
			isStart = false;
		}
		else
		{
			std::cout << divider << *it;
		}
	}

	std::cout << '\n';
}

int main()
{
	std::set<std::string> test_set = { "one", "two", "three", "four" };
	print_container(test_set, ", "); // four one three two. помните почему такой порядок? :)

	std::list<std::string> test_list = { "one", "two", "three", "four" };
	print_container(test_list, ", "); // one, two, three, four

	std::vector<std::string> test_vector = { "one", "two", "three", "four" };
	print_container(test_vector, ", "); // one, two, three, four

	return 0;
}
