#ifndef GPE_FILECHECK
#define GPE_FILECHECK
#ifdef WIN32
#include <Windows.h>
#include <wincrypt.h>
#include <sstream>
#define BUFSIZE 1024
#define MD5LEN  16
#define _UNICODE
#endif



#include <string>

namespace GPEUP {

	class FileCheck {
	private:
		DWORD md5_win(const std::string path, std::string & sum);
	public:
		bool checkfile(const std::string path, const std::string knownchecksum);
		int md5(const std::string path, std::string & sum);
	};

}

#endif // !GPE_FILECHECK
