#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<chrono>

//reheapdown function for heap sort
void reheapdown(std::vector<int>& v, int first, int last)
{
	int l, r, max;
	l = first * 2 + 1;
	r = first * 2 + 2;
	while (l <= last){
		max = l;
		if (r <= last && v[r] > v[l]){
			max = r;
		}

		if (v[first] < v[max]){
			std::swap(v[first], v[max]);
			first = max;
			l = first * 2 + 1;
			r = first * 2 + 2;
		}
		else
		
			break;
		
	}
}
//iplementing heapsort function 
void heapsort(std::vector<int>& v) {
	int f, l;
	int n = v.size();
	for (int i = n / 2 - 1; i >= 0; i--)
	{
		reheapdown(v, i, n - 1);
	}
	if (v.size() < 2)
		return;
	f = 0;
	l = v.size() - 1;
	while (l > 0) {
		std::swap(v[f], v[l]);
		--l;
		reheapdown(v, f, l);
	}
	 
}
//iplementing heapsort function 

void insertionSort(	std::vector<int>& v)
{
	int i,j;
	int temp;
	for (i = 0; i < v.size(); ++i)
	{
		j = i;
		while (j > 0 && v[j] < v[j - 1])
		{
			temp = v[j];
			v[j] = v[j - 1];
			v[j - 1] = temp;
			j--;
		}
	}

}
int main() {
	srand(time(0));//making seed for our rand function
	std::vector<int> A, B, C, E, F, G;
	//For vector A:
	{
		const auto start{ std::chrono::steady_clock::now() };

		A.reserve(100000);//reserving the memory for 1M values
		for (int i = 1;i <= 100000;++i) {
			A.push_back(i);//Storing the values in Vector A in ascending order.
		}
		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Storing values in vector A took " << elapsed_seconds.count() << " seconds" << std::endl;
	}
	//For vector B:
	{
		const auto start{ std::chrono::steady_clock::now() };

		B.reserve(100000);//reserving the memory for 1M values
		for (int i = 100000;i >= 1;--i) {
			B.push_back(i);//Storing the values in Vector B in descending order.
		}
		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Storing values in vector B took " << elapsed_seconds.count() << " seconds" << std::endl;
	}
	//For vector C:
	{
		const auto start{ std::chrono::steady_clock::now() };

		C.reserve(100000);//reserving the memory for 1M values
		int value;
		for (int i = 1;i <= 100000;++i) {
			C.push_back(rand() % 100 + 1);//Storing the Random Values in Vector C.
		}
		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Storing values in vector C took " << elapsed_seconds.count() << " seconds" << std::endl;
	}


	//---------------------->>>SORTINGGGGG<<<<--------------------------------
	//Sorting for Vector A
	{
		const auto start{ std::chrono::steady_clock::now() };

		std::sort(A.begin(), A.end());

		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Simple sorting for vector A took " << elapsed_seconds.count() << " seconds" << std::endl;
	}
	//Sorting for Vector B
	{
		const auto start{ std::chrono::steady_clock::now() };

		std::sort(B.begin(), B.end());

		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Simple sorting for vector B took " << elapsed_seconds.count() << " seconds" << std::endl;
	}
	//Sorting for Vector C
	{
		const auto start{ std::chrono::steady_clock::now() };

		std::sort(C.begin(), C.end());

		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Simple sorting for vector C took " << elapsed_seconds.count() << " seconds" << std::endl;
	}
	//For vector E:
	{
		const auto start{ std::chrono::steady_clock::now() };

		E.reserve(100000);//reserving the memory for 1M values
		for (int i = 1;i <= 100000;++i) {
			E.push_back(i);//Storing the values in Vector E in ascending order.
		}

		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Storing vaues in vector E took " << elapsed_seconds.count() << " seconds" << std::endl;
	}
	//For vector F:
	{
		const auto start{ std::chrono::steady_clock::now() };
		F.reserve(100000);//reserving the memory for 1M values

		for (int i = 100000;i >= 1;--i) {
			F.push_back(i);//Storing the values in Vector F in descending order.
		}

		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Storing values in vector F took " << elapsed_seconds.count() << " seconds" << std::endl;
	}
	//For vector G:
	{
		const auto start{ std::chrono::steady_clock::now() };

		G.reserve(100000);//reserving the memory for 1M values
		for (int i = 1;i <= 100000;++i) {
			G.push_back(rand() % 100 + 1);//Storing the Random values in Vector G.
		}
		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Storing values in vector G took " << elapsed_seconds.count() << " seconds" << std::endl;
	}
	
	//---------------------->>>ERASE_IF FUNCTION<<<<--------------------------------
	{
		//Vector E:
		const auto start{ std::chrono::steady_clock::now() };

		std::erase_if(E, [](int x) -> bool { return x % 2 == 1;});

		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Erase_if function for vector E took " << elapsed_seconds.count() << " seconds" << std::endl;
	}
		//Vector F:
	{
		const auto start{ std::chrono::steady_clock::now() };

		std::erase_if(F, [](int x) -> bool { return x % 2 == 1;});

		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Erase_if function for vector F took " << elapsed_seconds.count() << " seconds" << std::endl;
	}
		//Vector G:
	{
		const auto start{ std::chrono::steady_clock::now() };

		std::erase_if(G, [](int x) -> bool { return x % 2 == 1;});

		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Erase_if function for vector G took " << elapsed_seconds.count() << " seconds" << std::endl;
	}
		//===================>>>>>>>>>PART 2<<<<<<<<<<<=================================
	//---------------------->>>HEAPPP SORTINGGGGG<<<<--------------------------------
		//Vector A:
	{
		const auto start{ std::chrono::steady_clock::now() };

		heapsort(A);

		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Heap sort for vector A took " << elapsed_seconds.count() << " seconds" << std::endl;
	}
		//Vector B:
	{
		const auto start{ std::chrono::steady_clock::now() };

		heapsort(B);

		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Heap sort for vector B took " << elapsed_seconds.count() << " seconds" << std::endl;
	}
		//Vector C:
	{
		const auto start{ std::chrono::steady_clock::now() };

		heapsort(C);

		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Heap sort for vector C took " << elapsed_seconds.count() << " seconds" << std::endl;
	}
		//---------------------->>>INSERTIONN SORTINGGGGG<<<<--------------------------------
		//Vector A:
	{
		const auto start{ std::chrono::steady_clock::now() };

		insertionSort(A);

		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Insertion sort for vector A took " << elapsed_seconds.count() << " seconds" << std::endl;
	}
		//Vector B:
	{
		const auto start{ std::chrono::steady_clock::now() };

		insertionSort(B);

		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Insertion sort for vector B took " << elapsed_seconds.count() << " seconds" << std::endl;
	}
		//Vector C:
	{
		const auto start{ std::chrono::steady_clock::now() };

		insertionSort(C);

		const auto finish{ std::chrono::steady_clock::now() };
		const std::chrono::duration<double> elapsed_seconds{ finish - start };

		std::cout << "Insertion sort for vector C took " << elapsed_seconds.count() << " seconds" << std::endl;
	}


		return 0;
 }
