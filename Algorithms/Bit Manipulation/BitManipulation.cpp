#include <iostream>

using namespace std;

bool getBit(int num, int i){
  int mask = 1 << i;
  return num & mask != 0
}

int setBit(int num, int i){
  int mask = 1 << i;
  return num | mask;
}

int clearBit(int num, int i){
  int mask = ~(1 << i);
  return num & mask;
}

int clearBitsMStoi(int num, int i){
  int mask = (1 << i) -1;
  return num & mask;
}

int clearBitsito0(int num, int i){
  int mask = (-1 << (1+i));
  return num & mask;
}

int updateBit(int num, int i, int bitlsl){
  int value = bitlsl ? 1: 8;
  int mask = ~(1 << i);
  return(num & mask) | (value << i);
}
