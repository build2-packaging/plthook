#include <plthook.h>
#include <stdio.h>

#undef NDEBUG
#include <assert.h>

int
main (void)
{
  plthook_t *plthook = NULL;
  int r = plthook_open (&plthook, NULL);

  if (r != PLTHOOK_SUCCESS)
  {
    fprintf (stderr, "plthook_open: %s\n", plthook_error ());
    assert (r == PLTHOOK_SUCCESS);
  }

  assert (plthook != NULL);
  plthook_close (plthook);
  return 0;
}
