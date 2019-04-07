output = Polynomial_Evaluation([2,1],1)


function output = Polynomial_Evaluation(a, x)
n = length(a);
P = a(n);
for i = 1: n-1
    P = x * P + a(n-i);
end
output = P;
end