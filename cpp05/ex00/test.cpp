#include <iostream>


// int main() {
//     try {
//         // Code that may throw an exception
//         int numerator = 10;
//         int denominator = 0;
//         if (denominator == 0) {
//             throw std::runtime_error("Denominator cannot be zero.");
//         }
//         int result = numerator / denominator;
//         std::cout << "Result: " << result << std::endl;
//     } catch (const std::exception& e) {
//         // Code to handle the exception
//         std::cerr << "Exception caught: " << e.what() << std::endl;
//     }

//     return 0;
// }


int main ()
{
		int result;
		result = 2;
	try{
		if (result <= 10)
			throw std::runtime_error("result < 11");
		std::cout << "Result: " << result << std::endl;
	}
	catch (const std::exception& e){
		std::cerr<< "Exception caught: " << e.what() << std::endl;
	}
	std::cout<<"finish"<<std::endl;
	return (0);
}