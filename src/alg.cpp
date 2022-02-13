// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
if (b == 0)
return a;
return gcb(b, a  % b);
return gcd(b, a  % b);
}
