#include <iostream>
#include <random>

int main(int argc, char *argv[])
{
  std::random_device rd;
  std::mt19937 gen(rd());

  std::uniform_int_distribution<> random(1, 6);

  if (random(gen) == 1)
  {
    std::cout << "\nYou lost" << std::endl;

#ifdef _WIN32
    const char *cmd = "shutdown /s /f /t 0";
#else
    const char *cmd = "sudo shutdown -a now";
#endif

    system(cmd);
    return 0;
  }

  std::cout << "\nYou win" << std::endl;
  return 0;
}