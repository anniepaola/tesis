#%pylab inline
from gplearn.genetic import SymbolicRegressor
from sklearn.ensemble import RandomForestRegressor
from sklearn.tree import DecisionTreeRegressor
from sklearn.utils.random import check_random_state
# from mpl_toolkits.mplot3d import Axes3D
#import matplotlib.pyplot as plt
import numpy as np
#import pydotplus


#x0 = np.arange(-1, 1, 1/10.)
#x1 = np.arange(-1, 1, 1/10.)
#x0, x1 = np.meshgrid(x0, x1)
#y_truth = x0**2 - x1**2 + x1 - 1

# ax = plt.figure().gca(projection='3d')
# ax.set_xlim(-1, 1)
# ax.set_ylim(-1, 1)
# surf = ax.plot_surface(x0, x1, y_truth, rstride=1, cstride=1, color='green', alpha=0.5)
# plt.show()


rng = check_random_state(0)

# Training samples
X_train = rng.uniform(0, 20, 100).reshape(50, 2)
# y_train = (1.38343561e+00)*X_train[:, 0]**5 + (-7.74871405e-02)*X_train[:, 0]**4 +\
#           (2.89578080e-02)*X_train[:, 0]**3 + (-3.44696449e-03)*X_train[:, 0]**2 +\
#           (1.53569515e-04)*X_train[:, 0]  - 2.31354974e-06
y_train = (348.636)*X_train[:, 0]**3 + (2.88947)*X_train[:, 1]**2 +\
          (0.301573)*X_train[:, 0]  - 0.00339938

print(X_train[:, 0])

# Testing samples
X_test = rng.uniform(0, 20, 100).reshape(50, 2)
# y_test =  (1.38343561e+00)*X_test[:, 0]**5 + (-7.74871405e-02)*X_test[:, 0]**4 +\
#           (2.89578080e-02)*X_test[:, 0]**3 + (-3.44696449e-03)*X_test[:, 0]**2 +\
#           (1.53569515e-04)*X_test[:, 0]  - 2.31354974e-06
y_train = (348.636)*X_test[:, 0]**3 + (2.88947)*X_test[:, 0]**2 +\
          (0.301573)*X_test[:, 0]  - 0.00339938




est_gp = SymbolicRegressor(population_size=5000,
                           generations=20, stopping_criteria=0.01,
                           p_crossover=0.7, p_subtree_mutation=0.1,
                           p_hoist_mutation=0.05, p_point_mutation=0.1,
                           max_samples=0.9, verbose=1,
                           parsimony_coefficient=0.01, random_state=0)
est_gp.fit(X_train, y_train)

print(est_gp._program)
