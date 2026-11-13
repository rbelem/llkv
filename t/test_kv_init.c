#include <assert.h>
#include <kv.h>

int main(int argc, char *argv[])
{
  kv_t *db = kv_init(16);
  assert(db != NULL);
  assert(db->capacity == 16);
  assert(db->count == 0);
  kv_free(db);
  return EXIT_SUCCESS;
}
