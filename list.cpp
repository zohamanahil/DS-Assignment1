//#include<iostream>
//#include<list>
//#include<cstdlib>
//#include<ctime>
//#include<algorithm>
//#include<chrono>
//
//
//int main2() {
//	srand(time(0));//making seed for our rand function
//	std::list<int> a, b, c, e, f, g;
//	//for list a:
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		for (int i = 1;i <= 100000;++i) {
//			a.push_back(i);//storing the values in vector a in ascending order.
//		}
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "storing values in list a took " << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//	//for list b:
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		for (int i = 100000;i >= 1;--i) {
//			b.push_back(i);//storing the values in vector b in descending order.
//		}
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "storing values in list b took " << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//	//for list c:
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		int value;
//		for (int i = 1;i <= 100000;++i) {
//			c.push_back(rand() % 100 + 1);//storing the random values in vector c.
//		}
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "storing values in list c took " << elapsed_seconds.count() << " seconds" << std::endl;
//
//	}
//	//---------------------->>>sortinggggg<<<<--------------------------------
//	//sorting for list a
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		a.sort();
//
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "simple sorting for vector a took " << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//		//sorting for list b
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//	
//	     b.sort();
//	
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "simple sorting for vector b took " << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//	{
//		//sorting for list c
//		const auto start{ std::chrono::steady_clock::now() };
//	
//	
//		c.sort();
//
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "simple sorting for vector c took " << elapsed_seconds.count() << " seconds" << std::endl;
//
//	}
//	//for list e:
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		for (int i = 1;i <= 100000;++i) {
//			e.push_back(i);//storing the values in vector e in ascending order.
//		}
//
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "storing vaues in list e took " << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//	{
//		//for list f:
//		const auto start{ std::chrono::steady_clock::now() };
//
//		for (int i = 100000;i >= 1;--i) {
//			f.push_back(i);//storing the values in vector f in descending order.
//		}
//
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//		 
//		std::cout << "storing values in list f took " << elapsed_seconds.count() << " seconds" << std::endl;\
//	}
//	//for list g:
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		for (int i = 1;i <= 100000;++i) {
//			g.push_back(rand() % 100 + 1);//storing the random values in vector g.
//		}
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "storing values in list g took " << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//	//---------------------->>>erase_if function<<<<--------------------------------
//	//list e:
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		std::erase_if(e, [](int x) -> bool { return x % 2 == 1;});
//
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "erase_if function for list e took " << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//	//list f:
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		std::erase_if(f, [](int x) -> bool { return x % 2 == 1;});
//
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "erase_if function for list f took " << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//	//list g:
//	{
//		const auto start{ std::chrono::steady_clock::now() };
//
//		std::erase_if(g, [](int x) -> bool { return x % 2 == 1;});
//
//		const auto finish{ std::chrono::steady_clock::now() };
//		const std::chrono::duration<double> elapsed_seconds{ finish - start };
//
//		std::cout << "erase_if function for list g took " << elapsed_seconds.count() << " seconds" << std::endl;
//	}
//
//
//	return 0;
//}