#include <iostream>
#include <sst/plugininfra/paths.h>

int main(int, char **)
{
   auto p = sst::plugininfra::paths::bestDocumentsFolderPathFor("surgo");
   std::cout << p.generic_string() << std::endl;
   std::cout << p.u8string() << std::endl;

   return 0;
}
