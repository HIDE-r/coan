/**ARGS: source */
/**SYSCODE: = 1 | 2 | 16 */

#define A (1 - 0)
#define B (A + A)
#if B
KEEP ME
#endif
#if !B
DELETE ME
#endif

