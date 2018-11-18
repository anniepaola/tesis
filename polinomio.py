import numpy as np
import matplotlib.pyplot as plt


#--------------------- c ( x , t ) Densidad de nodos citoesqueléticos -------------------------------------

x = np.array([0,2,4,6,8,9,10,12,14,16,18,20])
y = np.array([1.37,1.36,1.34,1.34,1.41,1.43,1.4,1.25,1.14,1.08,1.04,1])
zc = np.polyfit(x, y, 5)

#print(zc)

c = np.poly1d(zc)
#print(c(2))

xc = np.linspace(0, 20, 100)
_c = plt.plot(x, y, '.', xc, c(xc), '-', xc, c(xc), '--')
plt.ylim(0, 1.5)
plt.show()

#Resultado: -2.31354974e-06 + (1.53569515e-04)X + (-3.44696449e-03)X**2  + (2.89578080e-02)X**3 + (-7.74871405e-02)X**4 + (1.38343561e+00)X**5
#            1.38344 X^5 - 0.0774871 X^4 + 0.0289578 X^3 - 0.00344696 X^2 + 0.00015357 X - 2.31355×10^-6

#--------------------- b( x , t )  Densidad de polimeros agrupados -------------------------------------

x = np.array([0,2,4,6,8,10,12,14,16,18,20])
y = np.array([350, 355, 360, 380,390,405,420,440,455,480,500])
zb = np.polyfit(x, y, 3)

#print(zb)

b = np.poly1d(zb)
#print(b(2))

xb = np.linspace(0, 20, 100)
_b = plt.plot(x, y, '.', xb, b(xb), '-', xb, b(xb), '--')
plt.ylim(350,500)
#plt.show()

#Resultado: -3.39937840e-03 + (3.01573427e-01)X + (2.88947164e+00)X**2  + (3.48636364e+02)X**3
#            348.636 X^3 + 2.88947 X^2 + 0.301573 X - 0.00339938

#--------------------- p( x , t ) Densidad de polimero libres  -------------------------------------

x = np.array([0,2,4,6,8,10,12,14,16,18,20])
y = np.array([130,128,120,110,100,85,70,55,35,20,0])
zp = np.polyfit(x, y, 3)

#print(zp)

p = np.poly1d(zp)
#print(p(2))

xp = np.linspace(0, 20, 100)
_p = plt.plot(x, y, '.', xp, p(xp), '-', xp, p(xp), '--')
plt.ylim(0,150)
#plt.show()

#Resultado: 7.35722611e-03 + (-4.20891608e-01)X + (-1.02680653e+00)X**2  + (1.30552448e+02)X**3
#           130.552 x^3 - 1.02681 x^2 - 0.420892 x + 0.00735723