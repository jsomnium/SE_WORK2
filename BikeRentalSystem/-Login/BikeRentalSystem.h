#ifndef BIKERENTALSYSTEM_H
#define BIKERENTALSYSTEM_H

// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

// 함수 선언
void doTask(ifstream& in_fp, ofstream& out_fp);

#endif
