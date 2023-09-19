#include <wchar.h>

int iswblank(wint_t c)
{
  return ((wchar_t)c == L' ' || (wchar_t)c == L'\t');
}
