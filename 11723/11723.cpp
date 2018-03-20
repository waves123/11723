#include <cstdio>
#include <cstring>
int main() {
	int m, x;
	char in[7];
	int set = 0;

	scanf("%d", &m);
	while (m--) {
		scanf("%s", in);
		if (!strcmp(in, "add")) {
			scanf("%d", &x);
			x--;
			set = (set | (1 << x));
		} else if (!strcmp(in, "remove")) {
			scanf("%d", &x);
			x--;
			set = (set & ~(1 << x));
		} else if (!strcmp(in, "check")) {
			scanf("%d", &x);
			x--;
			if ((set & (1 << x))) {
				printf("1\n");
			}
			else {
				printf("0\n");
			}
		} else if (!strcmp(in, "toggle")) {
			scanf("%d", &x);
			x--;
			set = (set ^ (1 << x));
		} else if (!strcmp(in, "all")) {
			set = (1 << 20) - 1;
		} else if (!strcmp(in, "empty")) {
			set = 0;
		} else {
			printf("error!\n");
		}
	}
}