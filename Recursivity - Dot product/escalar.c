float escalar(float vet1[], float vet2[], int t)
{
    if(t == 0)
    {
        return 0;
    }
    else
    {
        return vet1[t-1]*vet2[t-1] + escalar(vet1, vet2, t-1);
    }
}