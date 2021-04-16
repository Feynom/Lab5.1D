#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1D/Vector3D.h"
#include "../Lab5.1D/Vector3D.cpp"
#include "../Lab5.1D/Triad.h"
#include "../Lab5.1D/Triad.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51D
{
	TEST_CLASS(UnitTest51D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector3D A(1, 2, 3), B(4, 5, 6);
			//A * B	
			Assert::AreEqual(A * B, 32.);
		}
	};
}
