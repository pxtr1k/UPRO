void compress (unsigned char *p, int len) {
    for (int i = 0; i < len/2; i++) {
        p[i] = p[ i * 2 ] << 4 | p[ i * 2 + 1];
    }
    if (len % 2 == 1) {
        p[len / 2] = p[len - 1] << 4;
    }
}
