#include <iostream>

int main(int argc, char *argv[])
{
#ifdef _WIN32
  system("echo russian-roulette/rr.exe > %HOMEPATH%/rr.bat");
#else
  system("echo alias rr='~/russian-roulette/rr' >>~/.bashrc");
#endif

  return 0;
}