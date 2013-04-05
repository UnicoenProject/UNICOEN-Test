#include <stdio.h>

int main() {
	int a = 0, i = 1, j = 2, k = 3;
	switch(i) {
		case 0: {
		label: a = 0;
			if(i == 0) {
				switch(j) {
					case 0:
					break;
				}
			}
		}
	case 1:
		switch(k) {
			case 1:
			default:
			break;
		}
	}
	return 0;
}

