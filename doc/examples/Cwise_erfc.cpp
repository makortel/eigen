#include <Eigen/Core>
#include <unsupported/Eigen/SpecialFunctions>
#include <iostream>
using namespace Eigen_tf;
int main()
{
  Array4d v(-0.5,2,0,-7);
  std::cout << v.erfc() << std::endl;
}
