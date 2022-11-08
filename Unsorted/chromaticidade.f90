c
c      CHROMATCITY DIAGRAM   by Dan Bruton (astro@tamu.edu)
c
c      This program can be found at
c      http://www.physics.sfasu.edu/astro/color.html
c      and was last updated on February 22, 1996.
c
c      This program will create a ppm (portable pixmap)
c      image of an approximate chromaticity diagram using
c      equations from the Color Equations FAQ at
c      ftp://ftp.wmin.ac.uk/pub/itrg/coloureq.txt
c      or the Color Space FAQ.
c      The unix program ppmtogif is used to convert
c      the ppm image to a gif.  NetPBM's ppmtogif can be found at
c      ftp://ftp.cs.ubc.ca/ftp/archive/netpbm/
c
       IMPLICIT REAL*8 (a-h,o-z)
       DIMENSION ICV(800,800,3), WXY(2,82)
c
c      Chromaticity Coodinates (x and y) for wavelenghts in 5 nm
c      increments from 380 nm to 780 nm.
c
       DATA ((WXY(I,J),I=1,2),J=1,81)/
     *  0.1741,0.0050, 0.1740,0.0050, 0.1738,0.0049, 0.1736,0.0049,
     *  0.1733,0.0048, 0.1730,0.0048, 0.1726,0.0048, 0.1721,0.0048,
     *  0.1714,0.0051, 0.1703,0.0058, 0.1689,0.0069, 0.1669,0.0086,
     *  0.1644,0.0109, 0.1611,0.0138, 0.1566,0.0177, 0.1510,0.0227,
     *  0.1440,0.0297, 0.1355,0.0399, 0.1241,0.0578, 0.1096,0.0868,
     *  0.0913,0.1327, 0.0687,0.2007, 0.0454,0.2950, 0.0235,0.4127,
     *  0.0082,0.5384, 0.0039,0.6548, 0.0139,0.7502, 0.0389,0.8120,
     *  0.0743,0.8338, 0.1142,0.8262, 0.1547,0.8059, 0.1929,0.7816,
     *  0.2296,0.7543, 0.2658,0.7243, 0.3016,0.6923, 0.3373,0.6589,
     *  0.3731,0.6245, 0.4087,0.5896, 0.4441,0.5547, 0.4788,0.5202,
     *  0.5125,0.4866, 0.5448,0.4544, 0.5752,0.4242, 0.6029,0.3965,
     *  0.6270,0.3725, 0.6482,0.3514, 0.6658,0.3340, 0.6801,0.3197,
     *  0.6915,0.3083, 0.7006,0.2993, 0.7079,0.2920, 0.7140,0.2859,
     *  0.7190,0.2809, 0.7230,0.2770, 0.7260,0.2740, 0.7283,0.2717,
     *  0.7300,0.2700, 0.7311,0.2689, 0.7320,0.2680, 0.7327,0.2673,
     *  0.7334,0.2666, 0.7340,0.2660, 0.7344,0.2656, 0.7346,0.2654,
     *  0.7347,0.2653, 0.7347,0.2653, 0.7347,0.2653, 0.7347,0.2653,
     *  0.7347,0.2653, 0.7347,0.2653, 0.7347,0.2653, 0.7347,0.2653,
     *  0.7347,0.2653, 0.7347,0.2653, 0.7347,0.2653, 0.7347,0.2653,
     *  0.7347,0.2653, 0.7347,0.2653, 0.7347,0.2653, 0.7347,0.2653,
     *  0.7347,0.2653/

       WXY(1,82)=WXY(1,1)
       WXY(2,82)=WXY(2,1)
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
c      Width, height and color depth of the ppm image, gamma
c
       M=300
       N=M
       L=255
       GAM=0.8
c
c      Draw tongue outline
c
       DO II=1,M
        DO JJ=1,N
         DO KK=1,3
           ICV(II,JJ,KK)=0
         ENDDO
        ENDDO
       ENDDO

       DO J=1,81
         S1=REAL(M)*WXY(1,J)
         S2=REAL(M)*WXY(1,J+1)
         T1=REAL(N)*(1.D0-WXY(2,J))
         T2=REAL(N)*(1.D0-WXY(2,J+1))
         SLOPE=(T2-T1)/(S2-S1)
         I1=INT(S1)
         I2=INT(S2)
         DO II=I1,I2,JISIGN(1,I2-I1)
          S=REAL(II)
              J1=J2
          J2=INT(T1+SLOPE*(S-S1))
          IF ((J1.NE.0).AND.(J2.NE.0)) THEN
           DO JJ=J1,J2,JISIGN(1,J2-J1)
            DO KK=1,3
             ICV(II,JJ,KK)=1
            ENDDO
           ENDDO
          ENDIF
         ENDDO
       ENDDO
c
c      Calculate RGB Values for x and y coordinates
c
       DO J=1,N
        JTEST=0
        DO I=1,M
         IF ((ICV(I,J,1).EQ.1).AND.(ICV(I+1,J,1).EQ.0)) JTEST=JTEST+1
        ENDDO
        IF (JTEST.EQ.2) THEN
        ITEST=0
        DO I=1,M
         IF ((ICV(I,J,1).EQ.1).AND.(ICV(I+1,J,1).EQ.0)) ITEST=ITEST+1
         IF (ITEST.EQ.1) THEN
         XC=REAL(1.D0*I/M)
         YC=REAL(1.D0-1.D0*J/N)
         ZC=1.D0-(XC+YC)
         CALL XYZTORGB(XR,YR,ZR,XG,YG,ZG,XB,YB,ZB,XC,YC,ZC,R,G,B)
         RMAX=1.D-10
         IF (R.GT.RMAX) RMAX=R
         IF (G.GT.RMAX) RMAX=G
         IF (B.GT.RMAX) RMAX=B
         ICV(I,J,1)=INT(REAL(L)*(R/RMAX)**GAM)
         ICV(I,J,2)=INT(REAL(L)*(G/RMAX)**GAM)
         ICV(I,J,3)=INT(REAL(L)*(B/RMAX)**GAM)
         ENDIF
        ENDDO
        ENDIF
       ENDDO
c
c      Write to PPM File
c
       OPEN(UNIT=20,FILE='temp.ppm',STATUS='UNKNOWN')
1      FORMAT(A10)
       WRITE(20,1) 'P3        '
       WRITE(20,1) '# temp.ppm'
       WRITE(20,*) M,N
       WRITE(20,*) L
       DO J=1,N
        DO I=1,M
100      FORMAT(I4,2X,I4,2X,I4,2X)
         WRITE(20,*) ICV(I,J,1),ICV(I,J,2),ICV(I,J,3)
        ENDDO
       ENDDO
       STOP
       END
c *************************************************************************
      SUBROUTINE XYZTORGB(xr,yr,zr,xg,yg,zg,xb,yb,zb,xc,yc,zc,r,g,b)
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
