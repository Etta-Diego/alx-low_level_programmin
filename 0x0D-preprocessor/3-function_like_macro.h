#ifndef ABS_H
#define ABS_H

/**
 * abs - function-like macro that computes the absolute value of a number x
 * @x: value of a number to be computed
 *
 */

#define ABS(x) ((x) < (0) ? ((x) * (-1)) : (x))

#endif
