int numeroReverso(int num)
{
    int num_reverso = 0;
    while (num > 0) {
        num_reverso = num_reverso * 10 + num % 10;
        num = num / 10;
    }
    return num_reverso;
}
