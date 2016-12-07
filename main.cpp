 * Here is a trivial sample program:
 *
 #include "diff_match_patch.h"
 #include <string>
 using namespace std;
 int main(int argc, char **argv) {
   diff_match_patch<wstring> dmp;
   wstring str1 = L"First string in diff";
   wstring str2 = L"Second string in diff";
   wstring strPatch = dmp.patch_toText(dmp.patch_make(str1, str2));
   pair<wstring, vector<bool> > out
       = dmp.patch_apply(dmp.patch_fromText(strPatch), str1);
   wstring strResult = out.first;
   // here, strResult will equal str2 above.
   return 0;
 }