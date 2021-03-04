#include <stdio.h>

int main() {
	FILE* fin = fopen("in.txt", "r");
	FILE* fout = fopen("out.txt", "w");

	char bufa[1024];
	char bufb[1024];
	char bufc[1024];
	char bufd[1024];
	char bufe[1024];

	// %[^\n] : \n문자가 나오기 전까지 입력 받는다.
	// %[^\t] : \t문자가 나오기 전까지 입력 받는다.
	
	while (EOF != fscanf(fin, "%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n", bufa, bufb, bufc,bufd, bufe)) {
		fprintf(fout, "<tr>\n<td>%s</td>\n", bufa);
		fprintf(fout, "<td>%s</td>\n", bufb);
		fprintf(fout, "<td>%s</td>\n", bufc);
		fprintf(fout, "<td>%s</td>\n", bufd);
		fprintf(fout, "<td> %s </td>\n</tr>\n", bufe);
	}

	

	/* td가 2개
	while (EOF != fscanf(fin, "%[^\t]\t%[^\n]\n", bufa, bufb)) {

		fprintf(fout, "<tr>\n<td>%s</td>\n", bufa);

		fprintf(fout, "<td>%s</td>\n</tr>\n\n", bufb);

	}
	*/
	return 0;
}