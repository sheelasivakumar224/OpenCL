#include <iostream>
#include <vector>

int main(){
  std::vector<int> v1 {1,2,3,4};
  
  for(int i :v1){
    std::cout<<i<<" ";
  }
}
