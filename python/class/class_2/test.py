#%%
from colorsys import rgb_to_hsv
import cv2 as cv
import numpy as np

#%%
img = cv.imread("test.png")
cv.imshow('name' , img)
cv.waitKey(0)
#if k == 27:
cv.destroyAllWindows()
cv.waitKey(1)

# %%

# %%
