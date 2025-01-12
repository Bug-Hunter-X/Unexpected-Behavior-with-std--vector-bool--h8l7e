#include <iostream>
#include <vector>
#include <bitset>

int main() {
  // Inefficient approach using std::vector<bool>
  std::vector<bool> vecBool(1000000); // This is inefficient 
  // ... operations ...

  // Efficient approach using std::vector<char> to store bits
  std::vector<char> vecChar(1000000 / CHAR_BIT + 1); 
  // ... more efficient operations, using bitwise manipulation ...

  // Efficient approach using std::bitset
  std::bitset<1000000> bitset; 
  // ... operations using std::bitset methods...

  return 0;
}
