function Tcm2_1 = Tcm2_1f(l5,q2)
%TCM2_1F
%    TCM2_1 = TCM2_1F(L5,Q2)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    06-Jun-2018 00:23:24

t2 = cos(q2);
t3 = sin(q2);
Tcm2_1 = reshape([t2,t3,0.0,0.0,-t3,t2,0.0,0.0,0.0,0.0,1.0,0.0,l5.*t2,l5.*t3,0.0,1.0],[4,4]);
