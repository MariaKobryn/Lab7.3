#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab7.3/Lab7.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest73
{
	TEST_CLASS(UnitTest73)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int** M = new int* [2];
			for (int i = 0; i < 2; i++)
				M[i] = new int[2];
			M[0][0] = 2;
			M[0][1] = 2;
			M[1][0] = 3;
			M[1][1] = 5;

			int b = GetAbsSum(M, 2);
			Assert::AreEqual(b, 2);
		}
	};
}
