
#include "01.h"
#include <mutex>
#include <thread>
using namespace std;
std::mutex mu;
int i = 0;
void do_work() 
{
	std::unique_lock<std::mutex> (mu);
	std::cout << "i=" << i << std::endl;
	i++;
}
int main()
{
	const int thread_num = 10;
	std::thread threads[thread_num];

	for (size_t i = 0; i < thread_num; ++i)
	{
		threads[i] = std::thread(do_work);
	}
	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	for (size_t i = 0; i < thread_num; i++)
	{
		threads[i].join();
	}
	return 0;
}
