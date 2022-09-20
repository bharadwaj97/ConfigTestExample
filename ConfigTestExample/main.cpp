
//Include an external file
// #include ""
//Visual Studio will look for files within the project diectory FIRST

//#include<>
//Visual studio will look for files ouside project, but only inside 
//the directories specidfied to look in the Project configurtion

//Rule of thumb use double quotes (") to include files that you have rtten
//Use (<>) to include files that you have imported


#include<iostream>
#include <gtest/gtest.h>
int Factorial(int a) {
	//5! = 5 * 4 * 3 * 2 * 1
	if (a == 1)
		return 1;
	return a * Factorial(a - 1);
}

TEST(FactorialTests, Factorial) {
	EXPECT_EQ(120, Factorial(5));
	EXPECT_EQ(820, Factorial(6));
	EXPECT_EQ(24, Factorial(4));

}



int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	int result =	RUN_ALL_TESTS();
	return result; //return success
}  