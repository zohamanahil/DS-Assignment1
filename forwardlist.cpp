//#include<iostream>
//#include<forward_list>
//#include<cstdlib>
//#include<ctime>
//#include<algorithm>
//#include<chrono>
//
//
//int main() {
//	std::forward_list<int> A, B, C, E, F, G;
//	//For Forward List A:
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		for (int i = 1;i <= 100000;++i) {
//			A.push_front(i);//Storing the values in Vector A in ascending order.
//		}
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "Storing values in List A took" << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//	//For Forward List B:
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		for (int i = 100000;i >= 1;--i) {
//			B.push_front(i);//Storing the values in Vector B in descending order.
//		}
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "Storing values in List B took" << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//	//For Forward List C:
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		srand(time(0));//making seed for our rand function
//		int value;
//		for (int i = 1;i <= 100000;++i) {
//			C.push_front(rand() % 100 + 1);//Storing the Random values  in Vector C.
//		}
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "Storing values in List C took" << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//
//	//---------------------->>>SORTINGGGGG<<<<--------------------------------
//	//Sorting for Forward list A
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		A.sort();
//
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "Simple sorting for vector A took" << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//	//Sorting for Forward list B
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		B.sort();
//
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "Simple sorting for vector B took" << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//	//Sorting for Forward list C
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		C.sort();
//
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "Simple sorting for vector C took" << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//
//	//For Forward List E:
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		for (int i = 1;i <= 100000;++i) {
//			E.push_front(i);//Storing the values in Vector E in ascending order.
//		}
//
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "Storing vaues in List E took" << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//	//For Forward List F:
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		for (int i = 100000;i >= 1;--i) {
//			F.push_front(i);//Storing the values in Vector F in descending order.
//		}
//
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "Storing values in List F took" << elapsed_seconds.count() << " seconds" << std::endl;\
//	}
//	//For Forward List G:
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		srand(time(0));//making seed for our rand function
//		for (int i = 1;i <= 100000;++i) {
//			G.push_front(rand() % 100 + 1);//Storing the Random values in Vector G.
//		}
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "Storing values in List G took" << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//	//---------------------->>>ERASE_IF FUNCTION<<<<--------------------------------
//	//Forwadr list E:
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		std::erase_if(E, [](int x) -> bool { return x % 2 == 1;});
//
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "Erase_if function for  Forward list E took" << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//	//Forward list F:
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		std::erase_if(F, [](int x) -> bool { return x % 2 == 1;});
//
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "Erase_if function for  Forward list F took" << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//	//Forward list G:
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		std::erase_if(G, [](int x) -> bool { return x % 2 == 1;});
//
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "Erase_if function for  Forward list G took" << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//
//
//	return 0;
//}