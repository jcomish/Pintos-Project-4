//As defined in Appendix B
#define F (1 << 14)

int int_to_fp(int n);
int fp_to_int(int x);
int fp_to_int_round_nearest(int x);
int add_fp(int x, int y);
int subtract_fp(int x, int y);
int add_fp_and_int(int x, int n);
int subtract_int_from_fp(int x, int n);
int multiply_fp(int x, int y);
int multiply_fp_and_int(int x, int n);
int divide_fp(int x, int y);
int divide_fp_by_int(int x, int n);

int int_to_fp(int n) {
	return n * F;
}

int fp_to_int(int x) {
	return x / F;
}

int fp_to_int_round_nearest(int x) {
	if (x >= 0)
		return (x + F / 2) / F;
	if (x <= 0)
		return (x - F / 2) / F;
}

int add_fp(int x, int y) {
	return x + y;
}

int subtract_fp(int x, int y) {
	return x - y;
}

int add_fp_and_int(int x, int n) {
	return x + n * F;
}

int subtract_int_from_fp(int x, int n) {
	return x - n * F;
}

int multiply_fp(int x, int y) {
	return ((int64_t) x) * y / F;
}

int multiply_fp_and_int(int x, int n) {
	return  x * n;
}

int divide_fp(int x, int y) {
	return ((int64_t) x) * F / y;
}

int divide_fp_by_int(int x, int n) {
	return x / n;
}

