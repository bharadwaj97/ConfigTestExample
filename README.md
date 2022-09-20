# ConfigTestExample
Testing Factorial of different numbers using Google Test in built Libraries.
Visual Studio Solution 
--ConfigTestingExample
-dev
 -include
    -gtest
  -libraries
    -debug
       -gtest.lib

    -Release
      -gtest.lib
---------------------------
Including Libraries

--Add directory references to the include directory ".h" files.
--Add directory references to the library directory ".lib" files.
--Specify which .lib files will be used.

---------------------------------------------
How to write a Google Test

TEST(SuiteName,TestName) {
	EXPECT_EQ(value,function);
} 

-----------------------------------------
How to run a Google Test

#include<gtest/gtest.h>

::testing::InitGoogleTest(&argc, argv);
	int result =	RUN_ALL_TESTS();


----------------------
