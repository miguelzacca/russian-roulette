#include <iostream>

int main(int argc, char *argv[])
{
#ifdef _WIN32
  system("echo rr/rr.exe > %HOMEPATH%/rr.bat");
#else
  system("echo alias rr='~/rr/rr' >>~/.bashrc");
#endif

  return 0;
}