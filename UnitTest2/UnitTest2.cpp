#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.1.it/Source.cpp"
#include <cassert>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			int test1[] = { 1, 2, 3, 4, -5, 6 };  
			assert(PlusEl(test1, 6) == 3);
		}
	};
}
