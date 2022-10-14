c
c      RGB VALUES FOR HOT OBJECTS   by Dan Bruton (astro@sfasu.edu)
c
c      This program can be found at
c      http://www.physics.sfasu.edu/astro/color.html
c      and was last updated on March 19, 1996.
c
c      Reference Book
c      Color Science : Concepts and Methods, Quantitative Data and Formula
c                      by Gunter Wyszecki, W. S. Stiles
c                      John Wiley & Sons; ISBN: 0471021067
c
c      This program will calculate the RGB values for a given
c      energy distribution as a function of wavelength of light.
c      A black body is used and an example.
c
c      NetPBM's ppmtogif can be used to convert the ppm image generated
c      to a gif.  The red, green and blue values (RGB) are
c      assumed to vary linearly with wavelength (for GAM=1).
c      NetPBM Software: ftp://ftp.cs.ubc.ca/ftp/archive/netpbm/
c
       IMPLICIT REAL*8 (a-h,o-z)
       DIMENSION ICV(600,100,3)
c
c      Chromaticity Coordinates for Red, Green, Blue and White
c
       XR=0.64
       YR=0.33
       XG=0.29
       YG=0.60
       XB=0.15
       YB=0.06
       XW=0.3127
       YW=0.3291
       ZR=1.D0-(XR+YR)
       ZG=1.D0-(XG+YG)
       ZB=1.D0-(XB+YB)
       ZW=1.D0-(XW+YW)
c
c      IMAGE INFO - WIDTH, HEIGHT, DEPTH, GAMMA
c
       M=600
       N=50
       MX=255
       GAM=0.8
c
c      FIND COLOR VALUE, ICV, OF EACH PIXEL
c
       RMX=0.
       DO I=1,M
        T=1000.0 + REAL((I-1) * 10000./M)
        ITYPE=1
        CALL BLKBOD(T,X,Y,Z)
        CALL XYZTORGB(XR,YR,ZR,XG,YG,ZG,XB,YB,ZB,X,Y,Z,R,G,B)
        DO J=1,N
          IF (J.GT.40) CALL MARK(T,ITYPE,R,G,B)
          RMAX=1.D-10
          IF (R.GT.RMAX) RMAX=R
          IF (G.GT.RMAX) RMAX=G
          IF (B.GT.RMAX) RMAX=B
         ICV(I,J,1)=INT(REAL(MX)*(R/RMAX)**GAM)
         ICV(I,J,2)=INT(REAL(MX)*(G/RMAX)**GAM)
         ICV(I,J,3)=INT(REAL(MX)*(B/RMAX)**GAM)
        ENDDO
        IF (DMAX1(R,G,B).GT.RMX) THEN
          RMX=DMAX1(R,G,B)
        ENDIF
       ENDDO
c
c*****************************************************************************
c
c      WRITE OUTPUT TO PPM FILE
c
c      Output color values are normalized to color depth, MX.
c
       OPEN(UNIT=20,FILE='temp.ppm',STATUS='UNKNOWN')
1      FORMAT (A10)
       WRITE(20,1) 'P3        '
       WRITE(20,1) '# temp.ppm'
       WRITE(20,*) M,N
       WRITE(20,*) MX
       DO J=1,N
        DO I=1,M
         WRITE(20,*) ICV(I,J,1),ICV(I,J,2),ICV(I,J,3)
        ENDDO
       ENDDO
       STOP
       END
c
c ****************************************************************************
c
c      XYZ VALUES FROM TEMPERATURE OF OBJECT
c
c      A black body approximation is used where the temperature,
c      T, is given in Kelvin.  The XYZ values are determined by
c      "integrating" the product of the wavelength distribution of
c      energy and the XYZ functions for a uniform source.
c
       SUBROUTINE BLKBOD(T,X,Y,Z)
       IMPLICIT DOUBLE PRECISION (A-H,O-Z)
       DIMENSION  WXYZ(3,81)
c
c      CIE Color Matching Functions (x_bar,y_bar,z_bar)
c      for wavelenghts in 5 nm increments from 380 nm to 780 nm.
c
       DATA ((WXYZ(I,J),I=1,3),J=1,81)/
     *  0.0014, 0.0000, 0.0065, 0.0022, 0.0001, 0.0105,
     *  0.0042, 0.0001, 0.0201, 0.0076, 0.0002, 0.0362,
     *  0.0143, 0.0004, 0.0679, 0.0232, 0.0006, 0.1102,
     *  0.0435, 0.0012, 0.2074, 0.0776, 0.0022, 0.3713,
     *  0.1344, 0.0040, 0.6456, 0.2148, 0.0073, 1.0391,
     *  0.2839, 0.0116, 1.3856, 0.3285, 0.0168, 1.6230,
     *  0.3483, 0.0230, 1.7471, 0.3481, 0.0298, 1.7826,
     *  0.3362, 0.0380, 1.7721, 0.3187, 0.0480, 1.7441,
     *  0.2908, 0.0600, 1.6692, 0.2511, 0.0739, 1.5281,
     *  0.1954, 0.0910, 1.2876, 0.1421, 0.1126, 1.0419,
     *  0.0956, 0.1390, 0.8130, 0.0580, 0.1693, 0.6162,
     *  0.0320, 0.2080, 0.4652, 0.0147, 0.2586, 0.3533,
     *  0.0049, 0.3230, 0.2720, 0.0024, 0.4073, 0.2123,
     *  0.0093, 0.5030, 0.1582, 0.0291, 0.6082, 0.1117,
     *  0.0633, 0.7100, 0.0782, 0.1096, 0.7932, 0.0573,
     *  0.1655, 0.8620, 0.0422, 0.2257, 0.9149, 0.0298,
     *  0.2904, 0.9540, 0.0203, 0.3597, 0.9803, 0.0134,
     *  0.4334, 0.9950, 0.0087, 0.5121, 1.0000, 0.0057,
     *  0.5945, 0.9950, 0.0039, 0.6784, 0.9786, 0.0027,
     *  0.7621, 0.9520, 0.0021, 0.8425, 0.9154, 0.0018,
     *  0.9163, 0.8700, 0.0017, 0.9786, 0.8163, 0.0014,
     *  1.0263, 0.7570, 0.0011, 1.0567, 0.6949, 0.0010,
     *  1.0622, 0.6310, 0.0008, 1.0456, 0.5668, 0.0006,
     *  1.0026, 0.5030, 0.0003, 0.9384, 0.4412, 0.0002,
     *  0.8544, 0.3810, 0.0002, 0.7514, 0.3210, 0.0001,
     *  0.6424, 0.2650, 0.0000, 0.5419, 0.2170, 0.0000,
     *  0.4479, 0.1750, 0.0000, 0.3608, 0.1382, 0.0000,
     *  0.2835, 0.1070, 0.0000, 0.2187, 0.0816, 0.0000,
     *  0.1649, 0.0610, 0.0000, 0.1212, 0.0446, 0.0000,
     *  0.0874, 0.0320, 0.0000, 0.0636, 0.0232, 0.0000,
     *  0.0468, 0.0170, 0.0000, 0.0329, 0.0119, 0.0000,
     *  0.0227, 0.0082, 0.0000, 0.0158, 0.0057, 0.0000,
     *  0.0114, 0.0041, 0.0000, 0.0081, 0.0029, 0.0000,
     *  0.0058, 0.0021, 0.0000, 0.0041, 0.0015, 0.0000,
     *  0.0029, 0.0010, 0.0000, 0.0020, 0.0007, 0.0000,
     *  0.0014, 0.0005, 0.0000, 0.0010, 0.0004, 0.0000,
     *  0.0007, 0.0002, 0.0000, 0.0005, 0.0002, 0.0000,
     *  0.0003, 0.0001, 0.0000, 0.0002, 0.0001, 0.0000,
     *  0.0002, 0.0001, 0.0000, 0.0001, 0.0000, 0.0000,
     *  0.0001, 0.0000, 0.0000, 0.0001, 0.0000, 0.0000,
     *  0.0000, 0.0000, 0.0000/
c
       XX=0.D0
       YY=0.D0
       ZZ=0.D0
       DO K=1,81
         WL=380.D0+REAL(K-1)*5.D0
         CON=1240./8.617D-5
         DIS=3.74183D-16*(1./WL**5)/(DEXP(CON/(WL*T))-1.)
         XX=XX+DIS*WXYZ(1,K)
         YY=YY+DIS*WXYZ(2,K)
         ZZ=ZZ+DIS*WXYZ(3,K)
       ENDDO
       X=XX/DMAX1(XX,YY,ZZ)
       Y=YY/DMAX1(XX,YY,ZZ)
       Z=ZZ/DMAX1(XX,YY,ZZ)
       RETURN
       END
c
c ****************************************************************************
c
c      PLACE MARKERS ON IMAGE
c
       SUBROUTINE MARK(T,ITYPE,R,G,B)
       IMPLICIT DOUBLE PRECISION (A-H,O-Z)
c
c      ITYPE=1 - PLAIN IMAGE
c      ITYPE=2 - MARK IMAGE AT 1000 K INTEVALS
c
         IF (ITYPE.EQ.2) THEN
            DO K=1000,10000,1000
              IF (ABS(INT(T)-K).LE.1) THEN
               R=0.
               G=0.
               B=0.
              ENDIF
            ENDDO
         ENDIF
      RETURN
      END
c
c*********************************************************************
c
      SUBROUTINE XYZTORGB(xr,yr,zr,xg,yg,zg,xb,yb,zb,xc,yc,zc,R,G,B)
      IMPLICIT REAL*8 (a-h,o-z)
       r=(-xg*yc*zb+xc*yg*zb+xg*yb*zc-xb*yg*zc-xc*yb*zg+xb*yc*zg)/
     *   (+xr*yg*zb-xg*yr*zb-xr*yb*zg+xb*yr*zg+xg*yb*zr-xb*yg*zr)
       g=(+xr*yc*zb-xc*yr*zb-xr*yb*zc+xb*yr*zc+xc*yb*zr-xb*yc*zr)/
     *   (+xr*yg*zb-xg*yr*zb-xr*yb*zg+xb*yr*zg+xg*yb*zr-xb*yg*zr)
       b=(+xr*yg*zc-xg*yr*zc-xr*yc*zg+xc*yr*zg+xg*yc*zr-xc*yg*zr)/
     *   (+xr*yg*zb-xg*yr*zb-xr*yb*zg+xb*yr*zg+xg*yb*zr-xb*yg*zr)
       IF (R.LT.0.) R=0.
       IF (G.LT.0.) G=0.
       IF (B.LT.0.) B=0.
       IF (R.GT.1.) R=1.
       IF (G.GT.1.) G=1.
       IF (B.GT.1.) B=1.
      RETURN
      END
c *************************************************************************

