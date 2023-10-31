#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.1/PR6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(CreateFunctionTests)
{
public:
    TEST_METHOD(TestMethod1)
    {
        const int n = 10; 
        int a[n];
        Create(a, n, -50, 15);

       
        for (int i = 0; i < n; i++) {
            Assert::IsTrue(a[i] >= -50 && a[i] <= 15);
        }
    }
};


