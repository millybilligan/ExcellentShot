#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <Winsock2.h>
#include <iostream>
#include <Windows.h>
#include <VersionHelpers.h>
#include <Lmcons.h>
#include <thread>

#pragma comment(lib, "ws2_32.lib")
#define BUFFER 256
#define MAX_INPUT_BUFFER 500
#define MAX_OUTPUT_BUFFER 4096


#include "./server/server.h"
#include "./client/client.h"

int main() {
	ClientConnection();
	return 0;
}